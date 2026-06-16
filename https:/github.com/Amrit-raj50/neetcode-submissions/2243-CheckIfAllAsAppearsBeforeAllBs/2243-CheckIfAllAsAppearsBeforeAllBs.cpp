// Last updated: 16/06/2026, 14:11:55
class Solution {
public:
    bool checkString(string s) {
        int idx_a = 0;
        int idx_b = 0;
        bool flag = true;
        for(int i = 0 ; i < s.size() ; i++){
            if(s[i] == 'a'){
                idx_a = i;
                if(!flag && (idx_a > idx_b)){
                 break;
                }
            }
            else{
                idx_b = i;
                flag = false;
            }
        }
        return (idx_a <= idx_b) || flag;
    }
};