class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int k = s1.size();
        sort(s1.begin(),s1.end());
        int l = 0;
        int r = k-1;
        string str = "";
        bool flag = false;
        while(r < s2.size()){
            str = s2.substr(l,k);
            sort(str.begin(),str.end());
            if(s1 == str){
                flag = true;
                break;
            }
            l++;
            r++;
        }
        return flag;
    }
};
