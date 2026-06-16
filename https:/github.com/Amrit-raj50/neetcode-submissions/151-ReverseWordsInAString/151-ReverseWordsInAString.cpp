// Last updated: 16/06/2026, 14:13:21
class Solution {
public:
    string reverseWords(string s) {
        string n_s = "";
        vector<string> ns;
        for(int i = 0 ; i < s.length();i++){
            if(s[i] != ' '){
                    n_s += s[i];
            }
            else{
                if(!n_s.empty()){
                    ns.push_back(n_s);
                    n_s = "";
                }
            }
        }

        if(!n_s.empty()){
            ns.push_back(n_s);
        }

n_s = "";

        for(int i = ns.size()-1 ; i >= 0; i--){
            n_s += ns[i];
            if(i != 0){
                n_s += " ";
            }
        }

return n_s;
        
    }
};