// Last updated: 16/06/2026, 14:12:12
class Solution {
public:
    int countGoodSubstrings(string s) {
        if(s.size() < 3){
            return 0;
        }
        set<char> ch;
        int count = 0;
        for(int i = 0 ; i <= (s.size()-3); i++){
            for(int j = i ; j < (i+3) ; j++){
                ch.insert(s[j]);
                if(ch.size() == 3){
                    count++;
                }
            }
            ch.clear();
        }
        return count;
    }
};