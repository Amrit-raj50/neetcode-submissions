// Last updated: 15/07/2026, 21:42:45
class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int> dis;
        int d = 0;
        bool flag = false;
        for(int i = 0 ; i < prices.size() ; i++){
            flag = false;
            for(int j = i+1 ; j < prices.size() ; j++){
                if(prices[j] <= prices[i]){
                    flag = true;
                    d = prices[i]-prices[j];
                    dis.push_back(d);
                    break;
                 }
                // else{
                //     dis.push_back(prices[i]);
                //     break;
                // }
            }
            if(!flag){
                dis.push_back(prices[i]);
            }
        }
        return dis;
    }
};