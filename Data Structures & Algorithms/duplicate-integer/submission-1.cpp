class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int> s;
        bool flag = false;
        for(int i = 0 ; i < nums.size() ; i++){
            if(!s.count(nums[i])){
                s.insert(nums[i]);
            }else{
                flag = true;
                break;
            }
        }

        return flag;
    }
};