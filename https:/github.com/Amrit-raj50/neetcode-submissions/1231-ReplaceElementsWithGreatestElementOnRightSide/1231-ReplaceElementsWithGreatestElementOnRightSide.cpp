// Last updated: 15/07/2026, 21:42:53
class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int temp = 0;
        int m = arr[arr.size()-1];
        arr[arr.size()-1] = -1;
        for(int i = arr.size()-2 ; i >= 0 ; i--){
            temp = arr[i];
            arr[i] = m;
            m = max(m,temp);
        } 
        return arr;
    }
};