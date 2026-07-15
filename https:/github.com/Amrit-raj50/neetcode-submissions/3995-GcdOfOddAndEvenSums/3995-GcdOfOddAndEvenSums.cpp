// Last updated: 15/07/2026, 21:42:18
class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int Odd = 1;
        int Even = 2;
        int sumOdd = 0;
        int sumEven = 0;
        for(int i = 1 ; i <= n ; i++){
            sumOdd += Odd;
            sumEven += Even;
            Odd += 2;
            Even += 2;
        }
        // int GCD = gcd(sumOdd,sumEven);
        return gcd(sumOdd,sumEven);
    }
};