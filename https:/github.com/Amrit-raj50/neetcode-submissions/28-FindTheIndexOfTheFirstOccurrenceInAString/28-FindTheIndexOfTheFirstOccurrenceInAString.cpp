// Last updated: 16/07/2026, 20:43:10
class Solution {
public:
    int strStr(string haystack, string needle) {
        int l = 0 , h = needle.size()-1;
        string str = "";
        int idx = -1;
        while(h < haystack.size()){
            str = haystack.substr(l,h-l+1);
            if(str == needle){
                idx = l;
                break;
            }
            l++;
            h++;
        }
        return idx;
    }
};