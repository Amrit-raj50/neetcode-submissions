class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int sum = 0;
        vector<int> rs;
        for(int i = 0 ; i < nums.size() ; i++){
            sum = 0;
            for(int j = 0 ; j < nums.size() ; j++){
                if(i != j ){
                    if(nums[i]+nums[j]==target){
                        rs.push_back(i);
                        rs.push_back(j);
                        break;
                    }
                }
            }
            if(rs.size()==2){
                break;
            }
        }
        return rs;
    }
};
