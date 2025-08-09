class Solution {
public:
    bool isValid(string s) {
        if(s.size() == 1 || s[0] == ')' || s[0] == ']' || s[0] == '}'){
            return false;
        }
        stack<char> st;
        char top;
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == ')') {
                top = st.top();
                if (top == '(') {
                    st.pop();
                    continue;
                }
                break;

            } else if (s[i] == ']') {
                top = st.top();
                if (top == '[') {
                    st.pop();
                    continue;
                }
                break;
            } else if (s[i] == '}') {
                top = st.top();
                if (top == '{') {
                    st.pop();
                    continue;
                }
                break;
            } else {
                st.push(s[i]);
            }
        }
        return st.size() == 0;
    }
};