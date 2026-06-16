// Last updated: 16/06/2026, 14:13:27
class Solution {
public:
    bool isPalindrome(string s) {
         transform(s.begin(),s.end(),s.begin(),::tolower);
        string ns = "";
        string nns = "";
        int j = s.size()-1;
        for(int i = 0 ; i < s.size() ; i++){
            if(isalpha(s[i]) || isalnum(s[i])){
                ns += s[i];
            }
            if(isalpha(s[j]) || isalnum(s[j])){
                nns += s[j];
            }
            j--;

        }
        return ns == nns;
    }
};