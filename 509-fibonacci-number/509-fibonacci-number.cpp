class Solution {
public:
    int fib(int n) {
        
        
        int first = 0;
        int second = 1;
        int third;
        
        if(n < 2){
            return n;
        }
        
        for(int i=1; i<n; i++){
            
             third = first + second ;
            first = second;
                second = third;
        }
        
        return third;
        
    }
};