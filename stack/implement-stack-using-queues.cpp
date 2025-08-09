class MyStack {
public:
    MyStack() {
        
    }
    
    void push(int x) {
    if(!q1.empty())
        q1.push(x);
    else
        q2.push(x);
    
    }
    
    int pop() {
        int ret = 0;
        if(q1.empty()){
            while(q2.size() > 1){
                q1.push(q2.front());
                q2.pop();
            }
            ret = q2.front();
            q2.pop();
        }
        else{
            while(q1.size() > 1){
                q2.push(q1.front());
                q1.pop();
            }
            ret = q1.front();
            q1.pop();
        }
        return ret;
    }
    
    int top() {
        int ret = 0;
        if(q1.empty()){
            while(q2.size() > 1){
                q1.push(q2.front());
                q2.pop();
            }
            ret = q2.front();
            q2.pop();
            q1.push(ret);
        }
        else{
            while(q1.size() > 1){
                q2.push(q1.front());
                q1.pop();
            }
            ret = q1.front();
            q1.pop();
            q2.push(ret);
        }
        return ret;
    }
    
    bool empty() {
        return q1.empty() && q2.empty();
    }
private:
    queue<int> q1;
    queue<int> q2;
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */