// Last updated: 15/07/2026, 21:42:52
class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        // multimap<int,int> m;
        map<int,int> mp;
        vector<int> res;
        for(int i = 0 ; i < arr.size(); i++){
            mp[arr[i]] = 0;
        }
        int count = 1;
        for(auto i = mp.begin() ; i != mp.end() ; i++){
            i->second = count++;
        }

        for(int x : arr){
            res.push_back(mp[x]);
        }
       return res; 
    }
};