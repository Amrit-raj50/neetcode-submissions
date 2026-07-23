// Last updated: 23/07/2026, 22:29:46
class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        int l = 0 ;
        int h = k - 1;
        long long mx = 0;
        long long sum = 0;
        for(int i = l ; i <= h ; i++){
            sum += nums[i];
            m[nums[i]]++;
        }
        if(m.size() == k){
             mx = sum;
        }
        l++;
        h++;
        while(h < nums.size()){
            m[nums[l-1]]--;
            if(m[nums[l-1]] == 0){
                m.erase(nums[l-1]);
            }
            sum -= nums[l-1];
            l++;

            sum += nums[h];
            m[nums[h]]++;
            if(m.size() == k){
                mx = max(mx,sum);
            }
            h++;
        }
        return mx;
    }
};