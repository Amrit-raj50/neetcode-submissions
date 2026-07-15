// Last updated: 15/07/2026, 21:43:29
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> rs(nums.size(),1);
        int pre = 1 , post = 1;

        for(int i = 0 ; i < nums.size() ; i++){
            rs[i] = pre;
            pre = pre * nums[i];
        }

        for(int i = nums.size()-1 ; i >= 0 ; i--){
            rs[i] = rs[i]*post;
            post = post * nums[i];
        }

        return rs;
    }
};