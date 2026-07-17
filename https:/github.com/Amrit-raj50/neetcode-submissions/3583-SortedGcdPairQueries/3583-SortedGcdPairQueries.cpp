// Last updated: 17/07/2026, 06:59:55
class Solution {
public:
    vector<int> gcdValues(vector<int>& nums, vector<long long>& queries) {
        // int mx_ele = *max_element(nums.begin(),nums.end());
        // vector<long long> gcdPairs(mx_ele + 1 , 0);
        // vector<int> res;
        // for(int i = 0 ; i < nums.size() ; i++){
        //     for(int j = i+1 ; j < nums.size() ; j++){
        //         gcdPairs[gcd(nums[i],nums[j])]++;
        //     }
        // }
        // // sort(gcdPairs.begin(),gcdPairs.end());
        // vector<long long> prefixSums(mx_ele + 1, 0);
        // for (int i = 1; i <= mx_ele; i++) {
        //     prefixSums[i] = prefixSums[i - 1] + gcdPairs[i];
        // }
        // // for(int i = 0 ; i < queries.size() ; i++){
        // //     res.push_back(gcdPairs[queries[i]]);
        // // }
        // for(int i = 0 ; i < queries.size() ; i++){
        //     auto it = upper_bound(prefixSums.begin(), prefixSums.end(), queries[i]);
        //     res.push_back(distance(prefixSums.begin(), it));
        // }

        // return res;


        int max_val = *max_element(nums.begin(), nums.end());
        
        vector<long long> count(max_val + 1, 0);
        for (int num : nums) {
            count[num]++;
        }
        
        vector<long long> gcd_pairs_count(max_val + 1, 0);
        for (int i = 1; i <= max_val; i++) {
            long long multiples_cnt = 0;
            for (int j = i; j <= max_val; j += i) {
                multiples_cnt += count[j];
            }
            gcd_pairs_count[i] = (multiples_cnt * (multiples_cnt - 1)) / 2;
        }
        
        for (int i = max_val; i >= 1; i--) {
            for (int j = 2 * i; j <= max_val; j += i) {
                gcd_pairs_count[i] -= gcd_pairs_count[j];
            }
        }
        
        vector<long long> prefix_sums(max_val + 1, 0);
        for (int i = 1; i <= max_val; i++) {
            prefix_sums[i] = prefix_sums[i - 1] + gcd_pairs_count[i];
        }
        
        vector<int> res;
        for (long long q : queries) {
            auto it = upper_bound(prefix_sums.begin(), prefix_sums.end(), q);
            res.push_back(distance(prefix_sums.begin(), it));
        }
        
        return res;
    }
};