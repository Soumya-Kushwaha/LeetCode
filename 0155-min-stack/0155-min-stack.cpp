class MinStack {
public:
    stack<int> s;
    stack<int> t;
    
    MinStack() {
        
    }
    
    void push(int val) {
        s.push(val);
        
        if (t.empty() || t.top() >= val)
            t.push(val);
    }
    
    void pop() {
        if (s.empty())
            return;
        int temp = s.top();
        s.pop();
        if (t.top() == temp)
            t.pop();
    }
    
    int top() {
        if (s.empty())
            return -1;
        return s.top();
    }
    
    int getMin() {
        if (t.empty())
            return -1;
        return t.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */