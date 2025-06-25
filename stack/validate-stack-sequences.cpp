class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> st;
        int pushi = 0, popi = 0;

        while(pushi < pushed.size()){
            
            st.push(pushed[pushi++]);
            // 不匹配
            if(st.top() != popped[popi]){
                continue;
            }
            // 匹配
            // 要判斷是否為空 如果為空就不能取top的value
            while(!st.empty() && st.top() == popped[popi]){
                st.pop();
                ++popi;
            }
        }

        return st.empty();
    }
};