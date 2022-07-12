class Solution {
public:
    int triangularSum(vector<int>& nums) {
        
        int size = nums.size();
        for(int i=0; i < nums.size() -1; i++){
            
            size--;
            for(int j=0; j<size; j++){
                nums[j] = (nums[j] + nums[j+1]) % 10;
            }
                       
        }
        
        return nums[0];
        
        
    }
};