// Last updated: 16/06/2026, 14:12:52
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int prev = 0;
        int curr = 0;
        for(int i = 0; i < nums.size() ; i++){
            if(nums[i] == 1){
                prev++;
            }
            else{
                if(prev > curr){
                    curr = prev;
                }
                prev = 0;
            }
        }
        if(prev > curr){
            curr = prev;
        }
        return curr;
    }
};