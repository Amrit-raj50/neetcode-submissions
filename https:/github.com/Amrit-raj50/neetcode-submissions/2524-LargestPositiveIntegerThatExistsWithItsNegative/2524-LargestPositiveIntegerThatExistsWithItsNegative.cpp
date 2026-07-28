// Last updated: 28/07/2026, 17:57:53
class Solution {
public:
    int findMaxK(vector<int>& nums) {

        sort(nums.begin(), nums.end());

        int l = 0;
        int h = nums.size() - 1;

        while (h >= 0 && nums[h] > 0) {

            int big = l;

            while (big < nums.size() && nums[big] < 0) {

                if (-nums[h] == nums[big]) {
                    return nums[h];
                }

                big++;
            }

            h--;
        }

        return -1;
    }
};