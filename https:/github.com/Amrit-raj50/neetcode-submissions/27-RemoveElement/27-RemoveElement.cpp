// Last updated: 16/07/2026, 20:43:09
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        std::erase(nums,val);
        return nums.size();
    }
};