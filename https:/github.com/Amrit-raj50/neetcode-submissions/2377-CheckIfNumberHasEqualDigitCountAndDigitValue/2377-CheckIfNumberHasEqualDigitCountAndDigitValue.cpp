// Last updated: 16/06/2026, 14:11:58
class Solution {
public:
    bool digitCount(string num) {
        unordered_map<int,int> freq;
        for(int i = 0 ; i < num.size() ; i++){
            freq[num[i] - '0']++;
        }
        for(int i = 0 ; i < num.size() ; i++){
            if((num[i] - '0') != freq[i]){
                return false;
            }
        }
        return true;
    }
};