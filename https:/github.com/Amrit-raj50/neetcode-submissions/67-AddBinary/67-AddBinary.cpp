// Last updated: 16/06/2026, 14:13:30
class Solution {
public:
    string addBinary(string a, string b) {
       while(a.size() < b.size()) {
    a = "0" + a;
}

while(b.size() < a.size()) {
    b = "0" + b;
}

    //    while(n != ""){
    //     if()
    //    }
    string res = "";
    string carry = "0";
    char ch1,ch2;
    for(int i = a.size()-1 ; i >= 0 ; i--){
        if(i < a.size()) 
        {
            ch1 = a[i];
        }else{
            ch1 = '0';
        }
        if(i < b.size()) 
        {
            ch2 = b[i];
        }else{
            ch2 = '0';
        }

        if(ch1 == '0' && ch2 == '0'){
            if(carry == "1"){
                res += "1";
            }else{
                res += "0";
            }
            carry = "0";
        }else if(ch1 == '1' && ch2 == '0'){
            if(carry == "1"){
                res += "0";
                carry = "1";
            }else{
                res += "1";
                carry = "0";
            }
        }else if(ch1 == '0' && ch2 == '1'){
            if(carry == "1"){
                res += "0";
                carry = "1";
            }else{
                res += "1";
                carry = "0";
            }
        }else{
            if(carry == "1"){
                res += "1";
                carry = "1";
            }else{
                res += "0";
                carry = "1";
            }
        }
    }
    if(carry == "1"){
        res += carry;
    }
    reverse(res.begin(),res.end());
    return res;
    }
};