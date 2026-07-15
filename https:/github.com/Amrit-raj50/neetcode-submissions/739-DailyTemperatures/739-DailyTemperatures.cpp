// Last updated: 15/07/2026, 21:43:04
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int> sk;
        vector<int> res(temperatures.size(),0);

        for(int i = 0 ; i < temperatures.size() ; i++){
            while(!sk.empty() && temperatures[i] > temperatures[sk.top()]){
                int idx = sk.top();
                sk.pop();
                res[idx] = i - idx;
            }
            sk.push(i);
        }
        return res;
    }
};