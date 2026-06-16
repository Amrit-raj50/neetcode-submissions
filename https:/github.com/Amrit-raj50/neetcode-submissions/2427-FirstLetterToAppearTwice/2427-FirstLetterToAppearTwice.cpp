// Last updated: 16/06/2026, 14:11:49
class Solution {
public:
    char repeatedCharacter(string s) {
        vector<int> freq(26,0);

        for(char ch : s){
            freq[ch - 'a']++;

            if(freq[ch - 'a'] == 2){
                return ch;
                break;
            }
        }
        return ' ';
    }
};