class MyStack {
public:
    stack <int> st;

    void push(int x) {
        st.push(x);
    }
    
    int pop() {
        int top = st.top();
        st.pop();
        return top;
    }
    
    int top() {
        return st.top();
    }
    
    bool empty() {
        return st.empty();
    }
};
