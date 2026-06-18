// Last updated: 18/06/2026, 06:04:12
// i have used AI for the solving the Error .. there is a logic error .
1class Solution {
2public:
3    vector<int> findErrorNums(vector<int>& nums) {
4        set<int> s;
5        vector<int> rs;
6        int max = nums.size();
7        for(int i = 0; i < nums.size() ; i++){
8            if(s.count(nums[i])){
9                rs.push_back(nums[i]);
10                // rs.push_back(nums[i]+1);
11            }
12            s.insert(nums[i]);
13            // max = max < nums[i] ? nums[i] : max;
14            // max++;
15        }
16        // int j = 0;
17        sort(nums.begin() , nums.end());
18        for(int i = 1 ; i <= max ; i++){
19            if(!s.count(i)){
20                rs.push_back(i);
21                break;
22            }
23            // j++;
24        }
25        return rs;
26    }
27};