// Last updated: 7/26/2026, 4:01:55 PM
class MinStack {
public:
    stack<long long> st;
    long long mini = INT_MAX;
    MinStack() {
        
    }
    
    void push(int val) {
        if(st.empty()){
            st.push(val);
            mini = val;
        } else{
            if(mini>val){
                st.push(2LL*val - mini);
                mini = val;
            } else{
                st.push(val);
            }
        }
    }
    
    void pop() {
        if(st.empty()) return;

        long long top = st.top();
        st.pop();
        if(top<mini){
            mini = 2*mini - top;
        }
        if(st.empty()){
            mini = INT_MAX;
        }
    }
    
    int top() {
        long long top = st.top();
        if(top>=mini){
            return top;
        }else{
            return mini;
        }
    }
    
    int getMin() {
        return mini;
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