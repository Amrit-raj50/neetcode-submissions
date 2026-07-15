// Last updated: 15/07/2026, 21:42:21
class Solution {
public:
    string processStr(string s) {
        string result = "";
        for(int i = 0 ; i < s.size() ; i++){
            if(islower(s[i])){
                result += s[i];
            }else if(s[i] == '*'){
                if(result.size() > 0){
                    result.erase(result.size()-1 , 1);
                }
            }else if(s[i] == '#'){
                string dup = result;
                result += dup;
            }else{
                reverse(result.begin(),result.end());
            }
        }

        return result;
    }
};