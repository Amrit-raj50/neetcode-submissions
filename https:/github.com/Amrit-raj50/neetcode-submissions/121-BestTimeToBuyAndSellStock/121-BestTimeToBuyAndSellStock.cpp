// Last updated: 15/07/2026, 21:43:49
class Solution {
public:
    int maxProfit(vector<int>& prices) {
      int l = 0 ;
      int r = 1;
    //   int bp = 0 ;
    int profit = 0;

    while(r < prices.size()){
        if(prices[r] > prices[l]){
            profit = max(profit , prices[r]-prices[l]);
        }else{
            l = r;
        }
        r++;
    }
    return profit;
    }
};