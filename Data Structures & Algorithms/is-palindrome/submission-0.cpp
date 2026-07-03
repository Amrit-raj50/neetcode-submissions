class Solution {
public:
    bool isPalindrome(string s) {
        string real = "";
        string fake = "";
        for(int i = 0 ; i < s.size() ; i++){
            if(s[i] != ' ' && (isalpha(s[i]) || isdigit(s[i]))){
                if(isalpha(s[i])){
                    real += tolower(s[i]);
                }else{
                    real += s[i];
                }
            }
        }
        
        for(int j = real.size()-1 ; j >= 0 ; j--){
             if(real[j] != ' '){
                if(isalpha(real[j])){
                    fake += tolower(real[j]);
                }else{
                    fake += real[j];
                }
            }
        }
        return real == fake;

    }
};
