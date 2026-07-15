// Last updated: 15/07/2026, 21:43:09
class Solution {
public:
    vector<int> exclusiveTime(int n, vector<string>& logs) {
        vector<int> rs(n, 0);
        stack<int> st;

        int prev = 0;

        for (string log : logs) {
            int p1 = log.find(':');
            int p2 = log.find(':', p1 + 1);

            int id = stoi(log.substr(0, p1));
            string type = log.substr(p1 + 1, p2 - p1 - 1);
            int time = stoi(log.substr(p2 + 1));

            if (type == "start") {
                if (!st.empty()) {
                    rs[st.top()] += time - prev;
                }

                st.push(id);
                prev = time;
            } 
            else {
                rs[st.top()] += time - prev + 1;
                st.pop();
                prev = time + 1;
            }
        }

        return rs;
    }
};