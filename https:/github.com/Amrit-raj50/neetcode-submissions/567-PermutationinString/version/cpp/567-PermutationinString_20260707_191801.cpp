// Last updated: 07/07/2026, 19:18:01
1class Solution {
2public:
3    bool checkInclusion(string s1, string s2) {
4        int k = s1.size();
5        sort(s1.begin(),s1.end());
6        int l = 0;
7        int r = k-1;
8        string str = "";
9        while(r < s2.size()){
10            str = s2.substr(l,k);
11            sort(str.begin(),str.end());
12            if(s1 == str){
13                return true;
14            }
15            l++;
16            r++;
17        }
18        return false;
19    }
20};