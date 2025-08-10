class MyCircularQueue {
public:
    MyCircularQueue(int k) {
        capacity = k+1;
        v = vector<int>(capacity);
        rear = front = 0;

    }
    
    bool enQueue(int value) {
        if(isFull()){
            return false;
        }
        v[rear] = value;
        rear = (rear + 1) % capacity;
        return true;
    }
    
    bool deQueue() {
        if(isEmpty()){
            return false;
        }
        front = (front + 1) % capacity;
        return true;
    }
    
    int Front() {
        if(isEmpty()){
            return -1;
        }
        return v[front];
    }
    
    int Rear() {
        if(isEmpty()){
            return -1;
        }
        return v[(rear -1 + capacity) % capacity];
    }
    
    bool isEmpty() {
        return rear == front;
    }
    
    bool isFull() {
        return ((rear + 1)%capacity) == front;
    }
private:
    vector<int> v;
    int front;
    int rear;
    int capacity;
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */