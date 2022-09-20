class MyStack {
public:
    
    // Trick : Ensure at every time one queue should be empty
    queue<int> q1;
    queue<int> q2;
    MyStack() {
        
    }
    
    void push(int x) {
        if(q1.empty() && q2.empty()){
            q1.push(x);
        }else if(q1.empty() && !q2.empty()){
            q2.push(x);
        }else{
            q1.push(x);
        }
    }
    
    int pop() {
        int temp;
        if(q1.empty() && q2.empty()){
            // No acton taken
        }else if(q1.empty() && !q2.empty()){
            while(q2.size() > 1){
                q1.push(q2.front());
                q2.pop();
            }
            temp = q2.front();
            q2.pop();
            
        }else{
            while(q1.size() > 1){
                q2.push(q1.front());
                q1.pop();
            }
            temp = q1.front();
            q1.pop();
        }
        return temp;
    }
    
    int top() {
        int temp;
        if(q1.empty() && q2.empty()){
            
        }else if(q1.empty() && !q2.empty()){
            while(q2.size() > 1){
                q1.push(q2.front());
                q2.pop();
            }
            temp = q2.front();
            q2.pop();
            q1.push(temp);
        }else{
            while(q1.size() > 1){
                q2.push(q1.front());
                q1.pop();
            }
            
            temp = q1.front();
            q1.pop();
            q2.push(temp);
        }
        return temp;
    }
    
    bool empty() {
        return q1.empty() && q2.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */