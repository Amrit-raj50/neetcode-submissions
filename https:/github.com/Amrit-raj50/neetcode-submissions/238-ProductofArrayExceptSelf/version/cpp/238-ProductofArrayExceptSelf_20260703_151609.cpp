// Last updated: 03/07/2026, 15:16:09
1class Solution {
2public:
3    bool isValidSudoku(vector<vector<char>>& board) {
4        vector<set<int>> row(9);
5        vector<set<int>> col(9);
6        vector<set<int>> box(9);
7
8        for(int r = 0 ; r < 9 ; r++){
9            for(int c = 0 ; c < 9 ; c++){
10
11                char val = board[r][c];
12
13                if(val == '.'){
14                    continue;
15                }
16
17                if(row[r].count(val)){
18                    return false;
19                }
20                row[r].insert(val);
21
22                if(col[c].count(val)){
23                    return false;
24                }
25                col[c].insert(val);
26
27                int idx = (r/3) * 3 + (c/3);
28                if(box[idx].count(val)){
29                    return false;
30                } 
31                box[idx].insert(val);
32            }
33        }
34        return true;
35    }
36};
37