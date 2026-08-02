class MinStack {
public:

    stack<int> st, ms;

    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);
        if(ms.empty() || val <= ms.top())
            ms.push(val);
    }
    
    void pop() {
        if(st.empty()) return;
        if(st.top() == ms.top())
            ms.pop();
        st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return ms.top();
    }
};
