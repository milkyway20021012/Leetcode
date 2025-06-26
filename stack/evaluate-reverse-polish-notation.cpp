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
        for(size_t i = 0 ;i<tokens.size();++i){
            int ret = 0;
            if(!pd(tokens[i])){
                st.push( ((char)tokens[i]) - '0');
            }
            else{
                ret = st.top();
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
        }
        return ret;
    
    }

};