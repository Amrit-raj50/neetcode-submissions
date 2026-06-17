// Last updated: 17/06/2026, 10:57:03
// for this question ... i just stick to the basics and put all the conditions as given in the questions ... just for conformation i used chatgpt for builtin functions like .erase() , reverse() thats it
1class Solution {
2public:
3    string processStr(string s) {
4        string result = "";
5        for(int i = 0 ; i < s.size() ; i++){
6            if(islower(s[i])){
7                result += s[i];
8            }else if(s[i] == '*'){
9                if(result.size() > 0){
10                    result.erase(result.size()-1 , 1);
11                }
12            }else if(s[i] == '#'){
13                string dup = result;
14                result += dup;
15            }else{
16                reverse(result.begin(),result.end());
17            }
18        }
19
20        return result;
21    }
22};