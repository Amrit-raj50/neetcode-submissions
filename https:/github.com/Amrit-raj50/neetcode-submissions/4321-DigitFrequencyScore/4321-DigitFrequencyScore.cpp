// Last updated: 16/06/2026, 14:11:41
class Solution {
public:
    int digitFrequencyScore(int n) {
        // unordered_map<int,int> m;
        // string s = to_string(n);
        // for(int i = 0 ; i < s.size() ; i++){
        //     m[s[i]]++;
        // }
        // int sum = 0;
        // for(auto it : m){
        //     sum += it.second;
        // }

        int temp = n ;
        int sum = 0;
        while(temp > 0){
            int dig = temp % 10 ;
            sum = sum + dig;
            temp = temp / 10;
        }

        return sum;
    }
};