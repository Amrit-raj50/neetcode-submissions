// Last updated: 08/07/2026, 14:24:11
1class Solution {
2public:
3    int countSeniors(vector<string>& details) {
4        int count = 0;
5        for(int i = 0 ; i < details.size() ; i++){
6            if(details[i].size() >= 14 && stoi(details[i].substr(11,2)) > 60){
7                count++;
8            }
9        }
10        return count;
11    }
12};