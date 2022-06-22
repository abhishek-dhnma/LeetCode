class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        // COUNT TECHNIQUE
        
        int n = nums.size();
        int c = 0;
        for(int i=0; i<n; i++){
            
            if(nums[i] == 0){
                c++;
            }else{
                
                if(c!=0){
                    nums[i-c] = nums[i];
                    nums[i] = 0;
                }
            }
           
        }
        
    }
};