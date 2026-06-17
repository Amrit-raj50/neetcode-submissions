// Last updated: 17/06/2026, 06:14:22
/*
 * in this question i have used 2 map one for pattern -> s 
 * 2 ) s -> pattern 
 * 
 * and mainly checking that if any duplicates in map 1 && in map2 if any duplicates present then return false otherwise true.
 * 
 * AI ---> used AI for edge case ......that if pattern.size != v.size
*/

1class Solution {
2public:
3    bool wordPattern(string pattern, string s) {
4        map<char,string> m1;
5        map<string,char> m2;
6        vector<string> v;
7        string word = "";
8        //  set<char> s1;
9        // set<string> s2;
10
11        for(char ch : s){
12            if(ch == ' '){
13                v.push_back(word);
14                word = "";
15            }else{
16                word += ch;
17            }
18        }
19        v.push_back(word);
20
21        if(v.size() != pattern.size()){
22            return false;
23        }
24
25        for(int i = 0 ; i < pattern.size() ; i++){
26            if(m1.count(pattern[i])){
27                if(m1[pattern[i]] != v[i]){
28                    return false;
29                }
30            } 
31            
32            if(m2.count(v[i])){
33                if(m2[v[i]] != pattern[i]){
34                    return false;
35                }
36            }
37                 m1[pattern[i]] = v[i];
38                 m2[v[i]] = pattern[i];
39            }
40        return true;
41        }
42};