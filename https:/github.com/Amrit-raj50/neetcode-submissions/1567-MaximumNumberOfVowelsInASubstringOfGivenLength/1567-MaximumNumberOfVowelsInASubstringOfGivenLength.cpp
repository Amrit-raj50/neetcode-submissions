// Last updated: 23/07/2026, 22:30:04
class Solution {
public:
    int maxVowels(string s, int k) {
        // if(s.size() == 1 && (s[0] == 'a' || s[0] == 'e' || s[0] == 'i' || s[0] == 'o' || s[0] == 'u')){
        //     return 1;
        // }
        int l = 0;
        int h = k - 1;
        int mx = 0;
        int count = 0;
        for(int i = l ; i <= h ; i++){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
                mx++;
            }
        }
        l++;
        h++;
        count = mx;
        while(h < s.size()){
            if(s[h] == 'a' || s[h] == 'e' || s[h] == 'i' || s[h] == 'o' || s[h] == 'u'){
                count++;
            }
             if(s[l-1] == 'a' || s[l-1] == 'e' || s[l-1] == 'i' || s[l-1] == 'o' || s[l-1] == 'u'){
                count--;
            }
            mx = max(mx,count);
            l++;
            h++;
        }
        return mx;
    }
};