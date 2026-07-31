// Last updated: 31/07/2026, 19:40:35
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        // for(int i = 0 ; i < nums.size() ; i++){
        //     nums[i] = nums[i] * nums[i];
        // }
        // sort(nums.begin(),nums.end());
        int l = 0;
        int h = nums.size()-1;
        vector<int> ans(nums.size(),0);
        int n = nums.size()-1;
        while(l <= h){
            if(abs(nums[l]) < abs(nums[h])){
                ans[n] = nums[h] * nums[h];
                h--;
                n--;
            }else{
                ans[n] = nums[l] * nums[l];
                l++;
                n--;
            }

            if(l == h){
                ans[n] = nums[l] * nums[l];
            }
        }
        return ans;
    }
};