// Last updated: 18/07/2026, 06:57:34
class Solution {
public:
    int findGCD(vector<int>& nums) {
        int mx = INT_MIN;
        int mn = INT_MAX;
        for(int i = 0 ; i < nums.size();i++){
            mx = max(mx,nums[i]);
            mn = min(mn,nums[i]);
        }
        return gcd(mx,mn);
    }
};