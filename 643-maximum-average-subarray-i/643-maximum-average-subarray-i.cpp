class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        
        int n = nums.size();
        
        // Sliding Window Technique Question
        
        double ans;
        double sum = 0;
        
        for(int i=0; i<k; i++){
            sum += nums[i];
        }
        
        ans = sum;

        
        for(int j=k; j<n; j++){
            ans = max(ans, sum);
            sum += nums[j] - nums[j-k];
           
        }
        
        ans = max(ans, sum);
        
        
        return ans/k;
        
        
    }
};