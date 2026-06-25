// Last updated: 25/06/2026, 09:36:10
// full AI pure AI used
1class Solution {
2public:
3    vector<int> exclusiveTime(int n, vector<string>& logs) {
4        vector<int> rs(n, 0);
5        stack<int> st;
6
7        int prev = 0;
8
9        for (string log : logs) {
10            int p1 = log.find(':');
11            int p2 = log.find(':', p1 + 1);
12
13            int id = stoi(log.substr(0, p1));
14            string type = log.substr(p1 + 1, p2 - p1 - 1);
15            int time = stoi(log.substr(p2 + 1));
16
17            if (type == "start") {
18                if (!st.empty()) {
19                    rs[st.top()] += time - prev;
20                }
21
22                st.push(id);
23                prev = time;
24            } 
25            else {
26                rs[st.top()] += time - prev + 1;
27                st.pop();
28                prev = time + 1;
29            }
30        }
31
32        return rs;
33    }
34};