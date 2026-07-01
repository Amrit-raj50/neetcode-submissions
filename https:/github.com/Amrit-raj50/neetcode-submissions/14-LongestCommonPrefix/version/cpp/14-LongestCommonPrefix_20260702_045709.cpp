// Last updated: 02/07/2026, 04:57:09
1class Solution {
2public:
3    string longestCommonPrefix(vector<string>& strs) {
4
5        // if(strs.empty())
6        // return "";
7        // string word = "";
8        
9        // char  ch = strs[0][0];
10        // bool flag = false;
11        // int j = 0;
12        // for(int i = 1 ; i < strs.size() ; i++){
13            
14        //   if(ch == strs[i][j]){
15        //     flag = true;
16        //   }
17        //   else{
18        //     flag = false;
19        //   }
20
21        //   if(flag && (i == (strs.size()-1))){
22        //     word.push_back(ch);
23        //     j++;
24        //     ch = strs[0][j];
25        //     i = 1;
26        //   }
27        //   }
28
29        //   if(strs.size() == 1){
30        //     word = strs[0];
31        //   }
32        //   if(word.empty())
33        //   return "";
34
35        string subString = strs[0];
36        for(int i = 1 ; i < strs.size();i++){
37            while(strs[i].find(subString) != 0){
38                subString.pop_back();
39            }
40        }
41          return subString;
42        }
43    };