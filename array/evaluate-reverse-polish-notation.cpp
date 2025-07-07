class Solution {
    
public:
    bool pd(string ch){
        if(ch == "+" || ch == "-" || ch== "*" || ch=="/"){
            return true;
        }
        return false;
    }

    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        int ret = 0;
        for(auto token : tokens){
            if(pd(token)){
                int a = st.top(); st.pop();
                int b = st.top(); st.pop();
                if(token == "+"){
                    ret = b + a;
                }
                else if(token == "-"){
                    ret = b- a;
                }
                else if(token == "*"){
                    ret b * a;
                }
                else{
                    ret = b / a;
                }
                st.push(ret);
            }
            else{
                st.push(stoi(token));
            }
        }
        return st.top();
    }
};