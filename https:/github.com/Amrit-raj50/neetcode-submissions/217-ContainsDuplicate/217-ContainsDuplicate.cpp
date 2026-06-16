// Last updated: 16/06/2026, 14:13:10
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> s;
        for(int i = 0 ; i < nums.size() ; i++){
            if(s.count(nums[i])) return true;
            s.insert(nums[i]);
        }
        return s.size() != nums.size();
    }
};