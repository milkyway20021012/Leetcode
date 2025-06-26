class Solution {
public:
    bool pd(string ch) {
        if (ch == "+" || ch == "-" || ch == "*" || ch == "/") {
            return true;
        }
        return false;
    }

    int evalRPN(vector<string>& tokens) { 
        stack<int> st; 
        int ret = 0;
        for(size_t i = 0 ;i<tokens.size();++i){
            if(!pd(tokens[i])){
                st.push(stoi(tokens[i]));
            }
            else{
                st.pop();
                if(tokens[i] == "+"){
                    ret = st.top() + ret;
                    st.pop();
                    st.push(ret);
                }
                else if(tokens[i] == "-"){
                    ret = st.top() - ret;
                    st.pop();
                    st.push(ret);
                }
                else if(tokens[i] == "*"){
                    ret = st.top() * ret;
                    st.pop();
                    st.push(ret);
                }
                else{
                    ret = st.top() / ret;
                    st.pop();
                    st.push(ret);
                }
            }
            ret = st.top();
        }
        return ret;
    
    }

};