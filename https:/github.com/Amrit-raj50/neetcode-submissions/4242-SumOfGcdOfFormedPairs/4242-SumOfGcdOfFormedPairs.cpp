// Last updated: 16/07/2026, 06:36:49
class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        vector<int> prefixGcd;
        int mx = nums[0];
        for(int i = 0 ; i < nums.size() ; i++){
            mx = max(mx,nums[i]);
            prefixGcd.push_back(gcd(mx,nums[i]));
        }
        sort(prefixGcd.begin(),prefixGcd.end());
        long long sum = 0;
        int l = 0,h = prefixGcd.size()-1;
        while(l < h){
            sum = sum + gcd(prefixGcd[l] , prefixGcd[h]);
            l++;
            h--;
        }
        return sum;
    }
};