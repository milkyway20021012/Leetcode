class Solution {
public:
    string decodeString(string s) {
        stack<string> st;
        string ret;
        for (int i = 0; i < s.size(); ++i) {
            // Not ']' => push elements to stack.
            if (s[i] != ']') {
                st.push(string(1, s[i]));
            }
            // ']' => append n times element which is in [];
            else {
                string tmp = "";
                while (st.top() != "[") {
                    tmp = st.top() + tmp;
                    st.pop();
                }
                string apend = tmp;
                st.pop();
                int num = st.top()[0] - '0';
                st.pop();
                while (num > 1) {
                    tmp += apend;
                    --num;
                }
                st.push(tmp);
            }
        }
        // append all string.
        while(!st.empty()){
            cout << st.top();
            ret = st.top() + ret;
            st.pop();
        }

        return ret;
    }
};