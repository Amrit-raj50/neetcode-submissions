// Last updated: 16/06/2026, 14:13:02
class Solution {
public:
    int addDigits(int num) {
        int dup = num;
        int dig;
        int sum = 0;
        while(dup >= 10){
            sum = 0;
            while(dup > 0){
                dig = dup % 10;
                sum = sum + dig;
                dup = dup / 10;
            }
                dup = sum;
        }
        if(dup < 10){
            sum = dup;
        }
        return sum;
    }
};