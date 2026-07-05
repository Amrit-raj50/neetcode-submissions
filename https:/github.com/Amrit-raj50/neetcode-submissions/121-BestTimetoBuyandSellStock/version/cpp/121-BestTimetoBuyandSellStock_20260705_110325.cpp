// Last updated: 05/07/2026, 11:03:25
1class Solution {
2public:
3    int maxProfit(vector<int>& prices) {
4        int l = 0 ; 
5        int r = 1 ;
6        int profit = 0;
7        int bp = 0;
8
9        while(r < prices.size()){
10            if(prices[r] > prices[l]){
11                bp = prices[r] - prices[l];
12                profit = max(profit,bp);
13            }else{
14                l = r;
15            }
16            r++;
17        }
18        return profit;
19    }
20};