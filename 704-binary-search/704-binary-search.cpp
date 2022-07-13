class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        int s = 0;
        int e = nums.size() - 1;
        
        
        while(s <= e){
            int m = s + ((e-s)>>1);
            // right shift 1 times which is equal to n(x) = n(x) >> 2(b); means we divide the number by factor of 2power(x) s is the number if times we what to right shift  
            
            if( nums[m] == target){
          
                return m;
            }else if( nums[m] < target){
                s = m+1;
                
            }else{
                e = m-1;
            }
        }
        
        return -1;
        
    }
};