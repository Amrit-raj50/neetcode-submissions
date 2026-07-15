// Last updated: 15/07/2026, 21:42:50
class Solution {
public:
    int balancedStringSplit(string s) {
        string rs = "";
        int countR = 0;
        int countL = 0;
        int resC = 0;
        for(int i = 0 ; i < s.size() ; i++){
            if(s[i] == 'R'){
                countR++;
            }else{
                countL++;
            }

            if(countR == countL){
                resC++;
                countR = 0;
                countL = 0;
            }
        }
        return resC;
    }
};