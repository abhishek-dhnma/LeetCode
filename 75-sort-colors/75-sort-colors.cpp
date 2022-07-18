class Solution {
public:
    void sortColors(vector<int>& arr) {
        int n= arr.size();
        
        int zero = 0;
        int one = 0;
        int two = 0;
        int i;
        
        for(i=0; i<n; i++){
            
        if(arr[i] == 0 ){
            zero++;
        }else if (arr[i] == 1){
            one++;
        }else if(arr[i] == 2){
            two++;
        }
        }
        
        i = 0;

       while (zero > 0) {
        arr[i++] = 0;
        zero--;
    }
  
    // Then all the 1s
    while (one > 0) {
        arr[i++] = 1;
        one--;
    }
  
    // Finally all the 2s
    while (two > 0) {
        arr[i++] = 2;
        two--;
    }
  
            
        
    }
        
        
    };