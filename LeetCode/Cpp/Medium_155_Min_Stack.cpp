class MinStack {
private:
    stack<int> st;
    stack<int> mst;
public:
    MinStack() {
        st = stack<int>();
        mst = stack<int>();
    }
    
    void push(int value) {
        st.push(value);
        if (mst.empty() || mst.top() >= value) mst.push(value);
    }
    
    void pop() {
        if (st.top() == mst.top()) mst.pop();
        st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return mst.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
