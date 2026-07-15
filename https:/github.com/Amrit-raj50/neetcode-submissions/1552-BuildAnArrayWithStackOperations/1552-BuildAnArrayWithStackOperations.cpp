// Last updated: 15/07/2026, 21:42:47
class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> s;
        vector<int> v;

        int count = 0;
        int j = 0;
        for(int i = 1 ; i <= n ; i++){
            v.push_back(i);
            s.push_back("Push");
            if(i == target[j]){
                count++;
                j++;
            }else{
                v.pop_back();
                s.push_back("Pop");
            }

            if(count == target.size()){
                break;
            }
        }
        return s;

    }
};