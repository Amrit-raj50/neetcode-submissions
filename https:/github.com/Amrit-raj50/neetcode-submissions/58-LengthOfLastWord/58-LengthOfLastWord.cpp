// Last updated: 16/06/2026, 14:13:35
class Solution {
public:
    int lengthOfLastWord(string s) {
        reverse(s.begin(),s.end());
        int count = 0;
        for(int i = 0 ; i < s.size(); i++){
            if(isalpha(s[i])){
                count++;
            }
            if((count > 0) && (s[i] == ' ')){
                break;
            }
        }
        return count;
    }
};