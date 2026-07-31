// Last updated: 31/07/2026, 19:43:23
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int clo = nums[0] + nums[1] + nums[2];
        for(int i = 0 ; i < nums.size()-2 ; i++){
            int l = i + 1 ; 
            int h = nums.size()-1;

            while(l < h){
                int sum = nums[i] + nums[l] + nums[h];
                if(abs(target - sum) < abs(target - clo)){
                    clo = sum;
                }

                if(sum < target){
                    l++;
                }else if(sum > target){
                    h--;
                }else{
                    return sum;
                }
            }
        }
        return clo;
    }
};