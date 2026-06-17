// Last updated: 17/06/2026, 11:12:01
/*
 * In this question i have not used  AI for any thing , 
 * i have taken two counts one for R and one for L then whenever 
 * R == L then i increase resC and reset count of R and L to 0
 * Thats it.
*/

1class Solution {
2public:
3    int balancedStringSplit(string s) {
4        string rs = "";
5        int countR = 0;
6        int countL = 0;
7        int resC = 0;
8        for(int i = 0 ; i < s.size() ; i++){
9            if(s[i] == 'R'){
10                countR++;
11            }else{
12                countL++;
13            }
14
15            if(countR == countL){
16                resC++;
17                countR = 0;
18                countL = 0;
19            }
20        }
21        return resC;
22    }
23};