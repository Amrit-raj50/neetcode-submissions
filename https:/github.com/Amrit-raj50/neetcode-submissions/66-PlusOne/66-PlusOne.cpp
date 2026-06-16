// Last updated: 16/06/2026, 14:13:34
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        // string ds = "";
        // for(int i = 0 ; i < digits.size() ; i++){
        //     ds += to_string(digits[i]);
        // }
        // long long  num = stoll(ds) + 1;//stoll works with .. lagre integer...

        // digits.clear();
        // for(int dup = num ; dup > 0 ; dup = dup / 10){
        //     int dig = dup % 10;
        //     digits.push_back(dig);
        // }
        // reverse(digits.begin(),digits.end());

        // return digits;

        int n = digits.size();

        for(int i = n-1 ; i >= 0 ; i--){
            if(digits[i] < 9){
                digits[i]++;
                return digits;
            }
            digits[i] = 0;
        }

        digits.insert(digits.begin(),1);
        return digits;
    }
};