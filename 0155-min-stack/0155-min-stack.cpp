class MinStack {
    stack < pair < int, int >> st;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        int min1;
        if(st.empty()){
            min1=val;
            
        }
        else{
            min1=min(val,st.top().second);
        }
       st.push({val,min1});
    }
    
    void pop() {
        st.pop();
    }
    
    int top() {
        return st.top().first;
    }
    
    int getMin() {
        return st.top().second;
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