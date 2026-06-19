// Last updated: 19/06/2026, 05:48:16
// i have used AI for this
1class Solution {
2public:
3    string shiftingLetters(string s, vector<int>& shifts) {
4        int n = shifts.size();
5
6        for(int i = n - 2; i >= 0; i--){
7            shifts[i] = (shifts[i] + shifts[i + 1]) % 26;
8        }
9
10        for(int i = 0; i < n; i++){
11            int pos = s[i] - 'a';
12            pos = (pos + shifts[i]) % 26;
13            s[i] = pos + 'a';
14        }
15
16        return s;
17    }
18};