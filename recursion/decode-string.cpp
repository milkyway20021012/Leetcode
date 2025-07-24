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
                int num = 0;
                string tmp = "";
                while (st.top() != "[") {
                    tmp = st.top() + tmp;
                    st.pop();
                }
                string apend = tmp;
                string dig = "";
                st.pop();
                while (!st.empty() && isdigit(st.top()[0])) {
                    dig = st.top() + dig;
                    st.pop();
                }
                num = stoi(dig);
                while (num > 1) {
                    tmp += apend;
                    --num;
                }
                st.push(tmp);
            }
        }
        // append all string.
        while (!st.empty()) {
            ret = st.top() + ret;
            st.pop();
        }

        return ret;
    }
};