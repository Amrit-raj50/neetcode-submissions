class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> res(temperatures.size(),0);
        // bool flag = false;
        // for(int i = 0 ; i < temperatures.size() ; i++){
        //     flag = false;
        //     for(int j = i + 1 ; j < temperatures.size() ; j++){
        //         if(temperatures[i] < temperatures[j]){
        //             res.push_back(j - i);
        //             flag = true;
        //             break;
        //         }
        //     }
        //     if(!flag){
        //         res.push_back(0);
        //     }
        // }
        // return res;
        stack<int> sk;
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
