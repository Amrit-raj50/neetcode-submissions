// Last updated: 31/07/2026, 19:41:34
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] != 0){
                swap(nums[i],nums[j]);
                j++;
            }
        }

    }
};