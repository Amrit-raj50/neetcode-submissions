// Last updated: 15/07/2026, 21:43:06
class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        set<int> s;
        vector<int> rs;
        int max = nums.size();
        for(int i = 0; i < nums.size() ; i++){
            if(s.count(nums[i])){
                rs.push_back(nums[i]);
                // rs.push_back(nums[i]+1);
            }
            s.insert(nums[i]);
            // max = max < nums[i] ? nums[i] : max;
            // max++;
        }
        // int j = 0;
        sort(nums.begin() , nums.end());
        for(int i = 1 ; i <= max ; i++){
            if(!s.count(i)){
                rs.push_back(i);
                break;
            }
            // j++;
        }
        return rs;
    }
};