class Solution {
public:
    
             
    bool isPowerOfTwo(int n) {
        
        
        while( (n>0) and (n%2 == 0)){
        n = n>>1;
    }

    if(n==1){
        return true;
    }
     
        return false;

    }
};