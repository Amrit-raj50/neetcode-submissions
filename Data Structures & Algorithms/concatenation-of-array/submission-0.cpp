class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> rs;
        int count = 0;
        for(int j = 1 ; j <= 2 ; j++){
            for(int i = 0 ; i < nums.size() ; i++){
            rs.push_back(nums[i]);
        }
        }

        return rs;
    }
};