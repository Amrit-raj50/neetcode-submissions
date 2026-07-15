// Last updated: 15/07/2026, 21:42:59
class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        map<int,int> mp;
        int l = 0 , h = 0 , m = 0, Max = 0;
        while(h < fruits.size()){
            mp[fruits[h]]++;
            while(mp.size() > 2){
               
                mp[fruits[l]]--;
                if(mp[fruits[l]] == 0){
                    mp.erase(fruits[l]);
                }
                l++;
                Max = max(Max,h-l+1);
            }
            Max = max(Max,h-l+1);
            h++;
        }
        return Max;
    }
};