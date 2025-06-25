class MinStack {
public:
    MinStack() {}
    void push(int val) {
        // 優化
        // 不管怎樣都是 push 到 st1
        st1.push(val);

        if(st2.empty() || val <= st2.top()){
            st2.push(val);
        }
    }
    
    void pop() {
        if(st1.top() == st2.top()){
            st2.pop();
        }
            st1.pop();
        
    }
    
    int top() {
        return st1.top();
    }
    
    int getMin() {
        return st2.top();
    }
    private:
    stack<int> st1; // 正常的棧
    stack<int> st2; // 用來存放小的val
};