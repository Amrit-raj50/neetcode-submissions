// Last updated: 15/07/2026, 21:43:22
class Solution {
public:
    bool wordPattern(string pattern, string s) {
        map<char,string> m1;
        map<string,char> m2;
        vector<string> v;
        string word = "";
        //  set<char> s1;
        // set<string> s2;

        for(char ch : s){
            if(ch == ' '){
                v.push_back(word);
                word = "";
            }else{
                word += ch;
            }
        }
        v.push_back(word);

        if(v.size() != pattern.size()){
            return false;
        }

        for(int i = 0 ; i < pattern.size() ; i++){
            if(m1.count(pattern[i])){
                if(m1[pattern[i]] != v[i]){
                    return false;
                }
            } 
            
            if(m2.count(v[i])){
                if(m2[v[i]] != pattern[i]){
                    return false;
                }
            }
                 m1[pattern[i]] = v[i];
                 m2[v[i]] = pattern[i];
            }
        return true;
        }
};