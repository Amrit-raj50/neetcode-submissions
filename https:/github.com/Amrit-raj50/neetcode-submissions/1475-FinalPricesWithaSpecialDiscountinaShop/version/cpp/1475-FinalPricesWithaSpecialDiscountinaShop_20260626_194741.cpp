// Last updated: 26/06/2026, 19:47:41
1class Solution {
2public:
3    vector<int> finalPrices(vector<int>& prices) {
4        vector<int> dis;
5        int d = 0;
6        bool flag = false;
7        for(int i = 0 ; i < prices.size() ; i++){
8            flag = false;
9            for(int j = i+1 ; j < prices.size() ; j++){
10                if(prices[j] <= prices[i]){
11                    flag = true;
12                    d = prices[i]-prices[j];
13                    dis.push_back(d);
14                    break;
15                 }
16                // else{
17                //     dis.push_back(prices[i]);
18                //     break;
19                // }
20            }
21            if(!flag){
22                dis.push_back(prices[i]);
23            }
24        }
25        return dis;
26    }
27};