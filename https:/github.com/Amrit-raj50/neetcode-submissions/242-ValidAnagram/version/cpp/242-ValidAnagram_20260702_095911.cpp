// Last updated: 02/07/2026, 09:59:11
1class Solution {
2public:
3    bool isAnagram(string s, string t) {
4        if(s.size() != t.size()){
5            return false;
6        }
7
8        map<char,int> m;
9        map<char,int> m1;
10
11        for(int i = 0 ; i < s.size() ; i++){
12            m[s[i]]++;
13            m1[t[i]]++;
14        }
15
16        return m == m1;
17    }
18};