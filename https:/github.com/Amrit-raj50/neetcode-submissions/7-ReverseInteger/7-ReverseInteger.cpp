// Last updated: 04/08/2026, 23:17:06
class Solution {
public:
    int reverse(int x) {
        if(x < INT_MIN || x > INT_MAX){
            return 0;
        }
        bool flag = false;
        if(x < 0){
            flag = true;
            if(x == INT_MIN){
                return 0;
            }
            x = x * -1;
        }

        int temp = x;
        int sum = 0;
        int dig;
        bool trace = false;

        while(temp > 0){
            dig = temp % 10;
            temp = temp / 10;
            if(sum  > (INT_MAX - dig) / 10){
                sum = 0;
                break;
            }
            sum = sum * 10 + dig;
        }
        if(flag){
            sum = sum * -1;
        }

        return sum;
    }
};