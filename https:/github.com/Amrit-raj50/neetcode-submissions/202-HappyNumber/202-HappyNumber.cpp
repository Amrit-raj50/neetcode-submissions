// Last updated: 16/06/2026, 14:13:14
class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> seen;
        while(n != 1){
            if(seen.count(n)){
                return false;
            }

            seen.insert(n);
            int sum = 0;
            while(n > 0){
                int dig = n % 10;
                sum += dig * dig;
                n = n / 10;
            }
            n = sum;
        }
        return true;
    }
};