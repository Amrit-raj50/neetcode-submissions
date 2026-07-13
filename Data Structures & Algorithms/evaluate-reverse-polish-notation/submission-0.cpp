class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> sk;
        for(int i = 0 ; i < tokens.size() ; i++){
            string ch = tokens[i];
            if((ch == "+") || (ch == "-") || (ch == "*") || (ch == "/") && (sk.size() >= 2)){
                int a = sk.top();
                sk.pop();
                int b = sk.top();
                int sum = 0;
                sk.pop();
               if (ch == "+")
                  sum = b + a;
               else if (ch == "-")
                  sum = b - a;
               else if (ch == "*")
                  sum = b * a;
               else
                  sum = b / a;

                sk.push(sum);
            }
            else{
                sk.push(stoi(tokens[i]));
            }
        }
        return sk.top();
    }
};
