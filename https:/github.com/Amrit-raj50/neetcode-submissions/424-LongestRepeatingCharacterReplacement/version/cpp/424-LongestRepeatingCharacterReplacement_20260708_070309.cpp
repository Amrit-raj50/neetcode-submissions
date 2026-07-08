// Last updated: 08/07/2026, 07:03:09
1class Solution {
2public:
3    int characterReplacement(string s, int k) {
4        unordered_map<int,int> map;
5        int res = 0;
6        int maxf = 0;
7        int l = 0;
8        for(int r = 0; r < s.size() ; r++){
9            map[s[r]]++;
10            maxf = max(maxf,map[s[r]]);
11
12            while((r-l+1)-maxf > k){
13                map[s[l]]--;
14                l++;
15            }
16            res = max(res,r-l+1);
17        }
18        return res;
19    }
20};