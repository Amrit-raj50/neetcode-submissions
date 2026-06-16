// Last updated: 16/06/2026, 14:12:33
class Solution {
public:
    string reverseOnlyLetters(string s) {
              int i = 0 ; 
        int j = s.length()-1;

        while(i < j){
            if(!((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))){
                i++;
            }
            else if(!((s[j] >= 'a' && s[j] <= 'z') || (s[j] >= 'A' && s[j] <= 'Z'))){
                j--;
            }

            else{
                swap(s[i],s[j]);
                i++;
                j--;
            }
        }
        return s;
    }
};