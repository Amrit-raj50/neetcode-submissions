// Last updated: 04/07/2026, 10:19:51
1class Solution {
2public:
3    int lengthOfLongestSubstring(string s) {
4        set<int> rs;
5        int ans = 0 ;
6        int l = 0 ;
7        for(int r = 0 ; r < s.size() ; r++){
8            while(rs.count(s[r])){
9                rs.erase(s[l]);
10                l++;
11            }
12            rs.insert(s[r]);
13
14            ans = max(ans,r-l+1);
15        }
16
17        return ans;
18        
19    }
20};