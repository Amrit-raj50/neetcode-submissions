// Last updated: 15/07/2026, 21:43:14
class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<int,int> map;
        int res = 0;
        int maxf = 0;
        int l = 0;
        for(int r = 0; r < s.size() ; r++){
            map[s[r]]++;
            maxf = max(maxf,map[s[r]]);

            while((r-l+1)-maxf > k){
                map[s[l]]--;
                l++;
            }
            res = max(res,r-l+1);
        }
        return res;
    }
};