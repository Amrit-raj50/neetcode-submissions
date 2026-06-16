// Last updated: 16/06/2026, 14:12:07
class Solution {
public:
    int sumBase(int n, int k) {
        int sum = 0;
        int rem; 
            while(n > 0){
                rem = n % k;
                sum += rem;
                n = n / k;
            }
        return sum;
    }
};