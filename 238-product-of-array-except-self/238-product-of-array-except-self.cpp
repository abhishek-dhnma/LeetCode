class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        int n = nums.size();
        vector<int> right(n);
        right[0] = 1;
        vector<int> left(n);
        left[n-1] = 1;
        
        for(int i=1; i<n; i++){
            
            right[i] = right[i-1] * nums[i-1];
            left[n-i-1] = left[n-i] * nums[n-i];
        }
        vector<int> ans(n);
        for(int i=0;i<n;i++){
            ans[i] = right[i] * left[i];
        }
        return ans;
    }
};