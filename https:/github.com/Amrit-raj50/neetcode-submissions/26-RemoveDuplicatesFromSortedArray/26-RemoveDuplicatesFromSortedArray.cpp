// Last updated: 16/06/2026, 14:13:42
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count = 0;
       for(int i = 1 ; i < nums.size() ; i++){
        if(nums[i] != nums[count]){
            count++;
            nums[count] = nums[i];
        }
       }
       return count + 1;
        }
    
};