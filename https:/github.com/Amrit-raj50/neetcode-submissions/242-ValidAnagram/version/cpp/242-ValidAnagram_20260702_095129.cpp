// Last updated: 02/07/2026, 09:51:29
1class Solution {
2public:
3    bool isAnagram(string s, string t) {
4        map<char,int> m ;
5        map<char,int> m1;
6        if(s.size() != t.size()){
7            return false;
8        }
9
10        for(int i = 0 ; i < s.size() ; i++){
11            m[s[i]]++;
12            m1[t[i]]++;
13        }
14
15       return m == m1;
16    }
17};
18