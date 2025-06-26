class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(auto& token : tokens){
            if(token == "+" || token == "-" || token == "*" || token == "/"){
                int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();
                int result = 0;
                
                if(token == "+"){
                    result = b+a;
                }
                else if(token == "-"){
                    result = b-a;
                }
                else if(token == "*"){
                    result = b*a;
                }
                else{
                    result = b/a;
                }
                st.push(result);
            }
            else{
                st.push(stoi(token));
            }
        }
        return st.top();
    }
};