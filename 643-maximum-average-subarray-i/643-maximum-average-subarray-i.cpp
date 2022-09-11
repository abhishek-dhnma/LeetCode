class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        
        int n = nums.size();
        
        // Sliding Window Technique Question
        
        double ans = INT_MIN;
        double sum = 0;
        

        
        for(int j=0; j<n; j++){
            
            if(j<k){
                sum += nums[j];
            }else{
            ans = max(ans, sum);
            sum += nums[j] - nums[j-k];
            }
        }
        
        ans = max(ans, sum);
        
        
        return ans/k;
        
        
    }
};