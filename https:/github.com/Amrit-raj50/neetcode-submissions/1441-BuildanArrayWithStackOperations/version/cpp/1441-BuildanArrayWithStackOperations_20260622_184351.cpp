// Last updated: 22/06/2026, 18:43:51
1class Solution {
2public:
3    vector<string> buildArray(vector<int>& target, int n) {
4        vector<string> s;
5        vector<int> v;
6
7        int count = 0;
8        int j = 0;
9        for(int i = 1 ; i <= n ; i++){
10            v.push_back(i);
11            s.push_back("Push");
12            if(i == target[j]){
13                count++;
14                j++;
15            }else{
16                v.pop_back();
17                s.push_back("Pop");
18            }
19
20            if(count == target.size()){
21                break;
22            }
23        }
24        return s;
25
26    }
27};