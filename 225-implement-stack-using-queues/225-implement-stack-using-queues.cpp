class MyStack {
public:
    
    // Trick : Ensure at every time one queue should be empty
    queue<int> q1;
    queue<int> q2;
    MyStack() {
        
    }
    
    void push(int x) {
        if(q1.empty() && q2.empty()){
            q1.push(x); // or q2.push(x)
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
            // stack is empty
        }else if(q1.empty() && !q2.empty()){
            // transfer n-1 elements from q2 to q1
            while(q2.size() > 1){
                q1.push(q2.front());
                q2.pop();
            }
            //Save q2 front in temp According to question we need to return that
            temp = q2.front();
            // pop stack top i.e. pop the nth element from q2
            q2.pop();
            
        }else{
            // transfer n-1 elements from q1 to q2
            while(q1.size() > 1){
                q2.push(q1.front());
                q1.pop();
            }
            temp = q1.front();
            // pop stack top i.e. pop the nth element from q1
            q1.pop();
        }
        return temp;
    }
    
    int top() {
        int temp;
        if(q1.empty() && q2.empty()){
            
        }else if(q1.empty() && !q2.empty()){
            // transfer n-1 elements from q2 to q1
            while(q2.size() > 1){
                q1.push(q2.front());
                q2.pop();
            }
            // save & pop the nth element from q2 and transfer it to q1
            temp = q2.front();
            q2.pop();
            q1.push(temp);
        }else{
            // transfer n-1 elements from q1 to q2
            while(q1.size() > 1){
                q2.push(q1.front());
                q1.pop();
            }
            // save & pop the nth element from q1 and transfer it to q2
            temp = q1.front();
            q1.pop();
            q2.push(temp);
        }
        return temp;
    }
    
    bool empty() {
        // If both are empty then Stack is also empty
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