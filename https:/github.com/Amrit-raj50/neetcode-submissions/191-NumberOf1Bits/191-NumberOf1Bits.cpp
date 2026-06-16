// Last updated: 16/06/2026, 14:13:12
class Solution {
public:
    int hammingWeight(int n) {
        int temp = n ;
        int sum = 0;
        while(temp > 0){
            sum = sum + (temp % 2);
            temp = temp / 2;
        }
        return sum;
    }
};