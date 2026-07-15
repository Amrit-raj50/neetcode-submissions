// Last updated: 15/07/2026, 21:43:07
class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int k = s1.size();
        sort(s1.begin(),s1.end());
        int l = 0;
        int r = k-1;
        string str = "";
        while(r < s2.size()){
            str = s2.substr(l,k);
            sort(str.begin(),str.end());
            if(s1 == str){
                return true;
            }
            l++;
            r++;
        }
        return false;
    }
};