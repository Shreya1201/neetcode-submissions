class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> s;
        int ans;
        for(int i=0;i<tokens.size();i++){
            if(tokens[i] != "+" &&
                tokens[i] != "-" &&
                tokens[i] != "*" &&
                tokens[i] != "/"){
                s.push(stoi(tokens[i]));
            } else{
                int num1 = s.top();
                s.pop();
                int num2 = s.top();
                s.pop();
                if(tokens[i]=="+"){
                    s.push(num2+num1);
                }
                if(tokens[i]=="-"){
                    s.push(num2-num1);
                }
                if(tokens[i]=="*"){
                    s.push(num2*num1);
                }
                if(tokens[i]=="/"){
                    s.push(num2/num1);
                }
            }
        }
        return s.top();
    }
};
