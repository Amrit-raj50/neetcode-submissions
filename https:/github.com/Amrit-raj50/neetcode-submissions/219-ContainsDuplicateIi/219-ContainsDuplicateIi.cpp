// Last updated: 16/06/2026, 14:13:09
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        bool flag = false;
        unordered_map<int,int> m;
        for(int i = 0 ; i < nums.size() ; i++){
            if(m.count(nums[i])){
                if(abs(m[nums[i]] - i) <= k){
                    return true;
                    break;
                }
            }
            m[nums[i]] = i;
        }
        return flag;
    }
};