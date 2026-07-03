class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()){
            return 0;
        }
        vector<int> rs;
        sort(nums.begin(),nums.end());
        int first = nums[0];
        int count = 1;
        for(int i = 1 ; i < nums.size() ; i++){
            if(first == nums[i]){
                continue;
            }
            if(first+1 == nums[i]){
                count++;
                first = nums[i];
            }else{
                rs.push_back(count);
                count = 1;
                first = nums[i];
            }
        }
        rs.push_back(count);

        sort(rs.begin(),rs.end(),greater<int>());
         return rs[0];
    }
};
