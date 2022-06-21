class Solution {
public:
    int mySqrt(int x) {
        
        if(x == 0 || x == 1){
            return x;
        }
        
        long i = 0;
        while(i*i <= x){
            if(i*i == x){
                return i;
            }
            i++;
        }
        i--;
        
        return i;
        
    }
};