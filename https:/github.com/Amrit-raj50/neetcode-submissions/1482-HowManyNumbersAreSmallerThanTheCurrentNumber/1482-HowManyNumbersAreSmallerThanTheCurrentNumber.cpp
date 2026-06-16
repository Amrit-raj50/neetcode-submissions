// Last updated: 16/06/2026, 14:12:41
class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> rs;
        int count = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            count = 0;
            for(int j = 0 ; j < nums.size() ;j++){
                if(i != j){
                    if(nums[i] > nums[j]){
                        count++;
                    }
                }
            }
            rs.push_back(count);
        }
        return rs;
    }
};