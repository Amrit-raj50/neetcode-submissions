// Last updated: 16/06/2026, 14:11:51
class Solution {
public:
    int countAsterisks(string s) {
        int bar = 0;
        int ast = 0;
        for(int i = 0 ; i < s.size() ; i++){
            if(s[i] == '|'){
                bar++;
            }
            if((bar % 2 == 0) && (s[i] == '*')){
                ast++;
            }
        }
            return ast;
    }
};