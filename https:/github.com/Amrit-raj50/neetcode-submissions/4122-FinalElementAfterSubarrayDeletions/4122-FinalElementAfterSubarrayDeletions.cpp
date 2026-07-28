// Last updated: 28/07/2026, 17:57:45
class Solution {
public:
    int finalElement(vector<int>& nums) {
        // int len = nums.size();
        return max(nums[0], nums[nums.size() - 1]);
    }
};