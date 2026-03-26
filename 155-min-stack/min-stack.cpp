class MinStack {
public:
    stack<pair<int, int>>ans;
    MinStack() {
        
    }
    
    void push(int val) {
        if(ans.empty()){
            ans.push({val, val});
        }
        else{
            int min_value=min(val, ans.top().second);
            ans.push({val, min_value});
        }
    }
    
    void pop() {
        ans.pop();
    }
    
    int top() {
        return ans.top().first;
    }
    
    int getMin() {
        return ans.top().second;
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