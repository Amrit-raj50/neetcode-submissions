// Last updated: 16/06/2026, 14:12:15
class Solution {
public:
    string replaceDigits(string s) {
        for(int i = 0 ; i < s.size() ; i++){
            if((s[i] >= '0') && (s[i] <= '9')){
s[i] = (s[i-1] - '0') + (s[i] - '0') + '0';            }
        }
        return s;
    }
};