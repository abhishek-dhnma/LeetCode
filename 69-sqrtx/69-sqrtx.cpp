class Solution {
public:
    int mySqrt(int x) {
        
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