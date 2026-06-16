// Last updated: 16/06/2026, 14:13:49
class Solution {
public:
    int romanToInt(string s) {
        int sum = 0;
        int value = 0;
        int dup = 0;
        for(int i = 0 ; i < s.size() ; ){
            if(s[i] == 'I'){
               if(s[i+1] == 'V'){
                value = 4;
                i+=2;
               }
               else if(s[i+1] == 'X'){
                value = 9;
                i+=2;
               }
               else{
                value = 1;
                i++;
               }
            }
            else if(s[i] == 'V'){
                value = 5;
                i++;
            }
            else if(s[i] == 'X'){
                if(s[i+1] == 'L'){
                    value = 40;
                    i+=2;
                }
                else if(s[i+1] == 'C'){
                    value = 90;
                    i+=2;
                }
                else{
                    value = 10;
                    i++;
                }
            }
            else if(s[i] == 'L'){
                value = 50;
                i++;
            }
            else if(s[i] == 'C'){
                if(s[i+1] == 'D'){
                    value = 400;
                    i+=2;
                }
                else if(s[i+1] == 'M'){
                    value = 900;
                    i+=2;
                }
                else{
                     value = 100;
                     i++;
                }
            }
            else if(s[i] == 'D'){
                value = 500;
                i++;
            }
            else{
                value = 1000;
                i++;
            }
            sum = sum + value;
        }

        return sum;
    }

};