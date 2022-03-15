class Solution {
public:
    
    vector<int> buildArray(vector<int>& nums) {
        
        int n  = nums.size();
        
        vector<int> ans(n);
        
        for(int i=0; i<n; i++){
            
            if( i >=0 && i < n){
            
            ans[i] = nums[nums[i]];
                
            }
            
        }
        
        
        return ans;
    }
};