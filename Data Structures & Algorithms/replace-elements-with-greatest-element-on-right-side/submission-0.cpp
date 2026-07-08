class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
      vector<int> rs;
      int m = arr[arr.size()-1];
      arr[arr.size()-1] = -1;
      int temp = 0;
      for(int i = arr.size()-2 ; i >= 0 ; i--){
        temp = arr[i];
        arr[i] = m;
        m = max(m,temp);
      }
      return arr;
    }
};