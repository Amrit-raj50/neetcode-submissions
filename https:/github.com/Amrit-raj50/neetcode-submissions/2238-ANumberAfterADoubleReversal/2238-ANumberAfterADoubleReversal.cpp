// Last updated: 16/06/2026, 14:11:57
class Solution {
public:
    bool isSameAfterReversals(int num) {
        return (num % 10 != 0) || (num / 10 == 0);
    }
};