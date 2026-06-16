// Last updated: 16/06/2026, 14:12:26
class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> target;
        for(int i = 0 ; i < nums.size() ; i++){
            target.insert(target.begin() + index[i] , nums[i]);
        }
        return target;
    }
};