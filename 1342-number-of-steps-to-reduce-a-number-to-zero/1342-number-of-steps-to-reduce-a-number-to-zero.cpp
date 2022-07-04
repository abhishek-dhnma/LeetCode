class Solution {
public:
    int numberOfSteps(int num) {
        
        int n = num;
        int c=0;
        
        while(n != 0){
            
            if(n%2==0) // even
                {
                n /=2;
                c++;
                
            }else{
                n -= 1;
                c++;
            }
        }
        
        return c;
        
    }
};