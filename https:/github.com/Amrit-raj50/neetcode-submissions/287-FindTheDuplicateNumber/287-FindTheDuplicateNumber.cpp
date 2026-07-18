// Last updated: 18/07/2026, 06:58:01
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int> s;
        int n = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            if(s.count(nums[i])){
                n = nums[i];
                break;
            }
            s.insert(nums[i]);
        }
        return n;
    }
};