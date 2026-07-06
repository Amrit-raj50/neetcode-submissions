// Last updated: 06/07/2026, 22:23:56
1class Solution {
2public:
3    int maxProfit(vector<int>& prices) {
4      int l = 0 ;
5      int r = 1;
6    //   int bp = 0 ;
7    int profit = 0;
8
9    while(r < prices.size()){
10        if(prices[r] > prices[l]){
11            profit = max(profit , prices[r]-prices[l]);
12        }else{
13            l = r;
14        }
15        r++;
16    }
17    return profit;
18    }
19};