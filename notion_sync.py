import os, sys, requests

TOKEN = os.environ["NOTION_TOKEN"]
DB_ID = os.environ["NOTION_DATABASE_ID"]
HEADERS = {
    "Authorization": f"Bearer {TOKEN}",
    "Notion-Version": "2022-06-28",
    "Content-Type": "application/json"
}

def to_question_name(filepath):
    """
    Handles all common structures:
    - two-sum.py           → Two Sum
    - Easy/two-sum.py      → Two Sum
    - two-sum/solution.py  → Two Sum
    """
    import re
    parts = filepath.strip().split("/")
    # If the filename is 'solution.py', use the folder name instead
    filename = parts[-1]
    if filename.startswith("solution."):
        slug = parts[-2]
    else:
        slug = os.path.splitext(filename)[0]
    # Skip non-solution files
    if slug in ("README", "notion_sync", ""):
        return None
    return " ".join(word.capitalize() for word in re.split(r'[-_]', slug))

def find_notion_page(name):
    url = f"https://api.notion.com/v1/databases/{DB_ID}/query"
    res = requests.post(url, headers=HEADERS, json={
        "filter": {"property": "Question", "title": {"contains": name}}
    })
    results = res.json().get("results", [])
    return results[0] if results else None

def create_notion_page(name, difficulty, solution_code):
    url = "https://api.notion.com/v1/pages"
    payload = {
        "parent": {"database_id": DB_ID},
        "properties": {
            "Question": {"title": [{"text": {"content": name}}]},
            "Status": {"status": {"name": "Solved ✅"}},
            "Difficulty": {"select": {"name": difficulty}},
        }
    }
    res = requests.post(url, headers=HEADERS, json=payload)
    return res.json()

def mark_solved(page, solution_code):
    page_id = page["id"]
    # Update status
    requests.patch(f"https://api.notion.com/v1/pages/{page_id}", headers=HEADERS, json={
        "properties": {"Status": {"status": {"name": "Solved ✅"}}}
    })
    # Append solution code to page body
    requests.patch(f"https://api.notion.com/v1/blocks/{page_id}/children", headers=HEADERS, json={
        "children": [
            {"object": "block", "type": "heading_2", "heading_2": {
                "rich_text": [{"type": "text", "text": {"content": "✅ Solution (auto-synced from GitHub)"}}]
            }},
            {"object": "block", "type": "code", "code": {
                "rich_text": [{"type": "text", "text": {"content": solution_code[:2000]}}],
                "language": "python"
            }}
        ]
    })

# Guess difficulty from folder name if available
def guess_difficulty(filepath):
    parts = filepath.lower().split("/")
    for part in parts:
        if part in ("easy", "medium", "hard"):
            return part.capitalize()
    return "Medium"  # default

files = [l.strip() for l in sys.stdin.read().split("\n") if l.strip()]

for filepath in files:
    name = to_question_name(filepath)
    if not name:
        continue

    print(f"Processing: {name}")
    difficulty = guess_difficulty(filepath)

    try:
        with open(filepath, "r") as f:
            solution_code = f.read()
    except:
        solution_code = ""

    page = find_notion_page(name)

    if page:
        mark_solved(page, solution_code)
        print(f"  ✅ Marked solved in Notion!")
    else:
        # Auto-create the question if it doesn't exist yet
        create_notion_page(name, difficulty, solution_code)
        print(f"  ➕ Created & marked solved in Notion!")
