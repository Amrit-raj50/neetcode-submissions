// Last updated: 16/06/2026, 14:13:15
class Solution {
public:
    int reverseBits(int n) {
        string res = "";
        while(n > 0){
            res = to_string(n % 2) + res;
            n /= 2;
        }

        while(res.size() < 32){
            res = '0' + res;
        }
        reverse(res.begin(), res.end());

        int num = 0;
        for(char bit : res){
            num = num * 2 + (bit - '0');
        }

        return num;
    }
};