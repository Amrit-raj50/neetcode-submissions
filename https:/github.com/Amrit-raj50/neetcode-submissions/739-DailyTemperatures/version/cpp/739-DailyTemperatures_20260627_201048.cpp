// Last updated: 27/06/2026, 20:10:48
1class Solution {
2public:
3    vector<int> dailyTemperatures(vector<int>& temperatures) {
4        int n = temperatures.size();
5        vector<int> rs(n,0);
6        // int count = 0;
7        // bool flag = false;
8        // for(int i = 0 ; i < temperatures.size() ; i++){
9        //     count = 0;
10        //     flag = false;
11        //     for(int j = i+1 ; j < temperatures.size() ; j++){
12        //         if(temperatures[i] < temperatures[j]){
13        //             flag = true;
14        //             count++;
15        //             rs.push_back(count);
16        //             break;
17        //         }else{
18        //             count++;
19        //         }
20        //     }
21        //     if(!flag){
22        //         rs.push_back(0);
23        //     }
24        // }
25
26        stack<int> s;
27        for(int i = 0 ; i < n ; i++){
28            while(!s.empty() && temperatures[i] > temperatures[s.top()]){
29                int idx = s.top();
30                s.pop();
31
32                rs[idx] = i-idx;
33            }
34            s.push(i);
35        }
36        return rs;
37    }
38};