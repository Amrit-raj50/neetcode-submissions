// Last updated: 16/06/2026, 14:12:24
class Solution {
public:
    bool halvesAreAlike(string s) {
        int c = 0;
        int c1 = 0;
        for(int i = 0 ; i < s.length() ; i++){
            if(s[i] == 'a' ||s[i] == 'e' ||s[i] == 'i' ||s[i] == 'o' ||s[i] == 'u' ||s[i] == 'A' ||s[i] == 'E' ||s[i] == 'I' ||s[i] == 'O' ||s[i] == 'U' ){
                if(i < s.length()/2){
                    c++;
                }
                else{
                    c1++;
                }
            }
        }

        return c == c1;
    }
};