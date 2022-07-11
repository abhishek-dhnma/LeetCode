class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
        int size = nums.size();
        int ans = size;
       // nums.resize(nums.size()+1);
        
        
        
        for(int i=0;i< size; i++){
            
            if(nums[i] != i){
                ans = i;
                break;
            }
        }
        
        return ans;
        
    }
};