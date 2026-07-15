// Last updated: 15/07/2026, 21:43:44
class Solution {
public:
    int singleNumber(vector<int>& nums) {
         for(int i = 0 ; i < nums.size() ; i++){
            int count = 0;
            for(int j = 0 ; j < nums.size() ; j++){
                if((nums[i] == nums[j]) && (i != j)){
                    count++;
                }
            }
            if(count == 0){
                return nums[i];
            }
        }
        return -1;
    }
};

