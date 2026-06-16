// Last updated: 16/06/2026, 14:12:37
class Solution {
public:
    int countPrimeSetBits(int left, int right) {
        int res = 0;
        for(int i = left ; i <= right ; i++){
            int sum = 0;
            int dup = i;
            while(dup > 0){
                sum = sum + (dup % 2);
                dup = dup / 2;
            }
            int count = 0;
            for(int j = 1 ; j <= sum ; j++){
                if(sum % j == 0){
                    count++;
                }
            }
            if(count == 2){
                res++;
            }
        }
        return res;
    }
};