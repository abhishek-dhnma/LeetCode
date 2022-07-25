class Solution {
public:
    int countEven(int num) {
        
         int count = 0;
    
        
        for(int i=1; i<=num; i++){
           int sum = 0; 
            int n =i;
            while(n != 0){
                int last = n%10;
                sum = sum + last;
                n = n/10;
            }
            //cout << sum << endl;
            if(sum%2 == 0){
                count++;
            }
        }
        
        return count;
        
    }
};