class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char> rs;
        int l = 0;
        int ans = 0;
        for(int r = 0 ; r < s.size() ; r++){
            while(rs.count(s[r])){
                rs.erase(s[l]);
                l++;
            }
            rs.insert(s[r]);
            ans = max(ans,r-l+1);
        }

        return ans;
        
    }
};
