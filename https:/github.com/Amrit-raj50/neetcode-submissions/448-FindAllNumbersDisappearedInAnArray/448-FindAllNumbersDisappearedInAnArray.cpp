// Last updated: 15/07/2026, 21:43:11
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        vector<int> v;
        int idx = 0;
        int n = nums.size();

        for (int i = 1; i <= n; i++) {
            while (idx < n && nums[idx] < i) {
                idx++;
            }

            if (idx >= n || nums[idx] != i) {
                v.push_back(i);
            }
        }

        return v;
    }
};