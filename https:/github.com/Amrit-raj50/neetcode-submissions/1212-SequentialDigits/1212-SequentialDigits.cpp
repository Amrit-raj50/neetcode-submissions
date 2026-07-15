// Last updated: 15/07/2026, 21:42:55
class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int> res;
        vector<int> sqDig;
        string str = "123456789";

        for(int l = 2 ; l <= 9 ; l++){
            for(int i = 0 ; i + l <= 9; i++){
                sqDig.push_back(stoi(str.substr(i,l)));
            }
        }
        for(int i = 0 ; i < sqDig.size() ; i++){
            if((sqDig[i] >= low) && (sqDig[i] <= high)){
                res.push_back(sqDig[i]);
            }
        }
        return res;
        }
        
    };