class MyQueue {
public:
    
    stack<int> s1;
    stack<int> s2;
    MyQueue() {
        
    }
    
    void push(int x) {
        if(s1.empty() && s2.empty()){
            s1.push(x);
        }else if(s1.empty() && !s2.empty()){
            s2.push(x);
        }else{
            s1.push(x);
        }
        
    }
    
    int pop() {
        int temp;
        if(s1.empty() && s2.empty()){
            // queue is empty
        }else if(s1.empty() && !s2.empty()){
            
            while(!s2.empty()){
                s1.push(s2.top());
                s2.pop();
            }
            temp = s1.top();
            s1.pop();
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
            
        }else if(!s1.empty() && s2.empty()){
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
            temp = s2.top();
            s2.pop();
            while(!s2.empty()){
                s1.push(s2.top());
                s2.pop();
            }
        }
        return temp;
    }
    
    int peek() {
        int temp;
        if(s1.empty() && s2.empty()){
            // queue is empty
        }else if(s1.empty() && !s2.empty()){
            
            while(!s2.empty()){
                s1.push(s2.top());
                s2.pop();
            }
            temp = s1.top();
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
            
        }else if(!s1.empty() && s2.empty()){
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
            temp = s2.top();
            while(!s2.empty()){
                s1.push(s2.top());
                s2.pop();
            }
        }
        return temp;
    }
    
    bool empty() {
        return s1.empty() && s2.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */