// Last updated: 03/07/2026, 19:41:33
1class Solution {
2public:
3    vector<int> twoSum(vector<int>& numbers, int target) {
4        vector<int> res;
5        bool flag = false;
6        int i = 0;
7        int j = numbers.size()-1;
8        while(!flag){
9            int rs = numbers[i] + numbers[j];
10            if(rs == target){
11                flag = true;
12                res.push_back(i+1);
13                res.push_back(j+1);
14                break;
15            }
16            else if(rs < target){
17                i++;
18            }
19            else{
20                j--;
21            }
22        }
23        return res;
24    }
25};