class MyQueue {
public:
    MyQueue() {}

    void push(int x) { input_st.push(x); }

    int pop() {
        peek();
        int val = output_st.top();
        output_st.pop();
        return val;
    }

    int peek() {
        if (output_st.empty()) {
            while (!input_st.empty()) {
                output_st.push(input_st.top());
                input_st.pop();
            }
        }
        return output_st.top();
    }

    bool empty() { return input_st.empty() && output_st.empty(); }

private:
    stack<int> input_st;
    stack<int> output_st;
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */