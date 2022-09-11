class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        
        int n = nums.size();
        if(k > n){
            return 0;
        }
        
        // Sliding Window Technique Question
        
        double ans;
        
        
        double sum = 0;
        
        for(int i=0; i<k; i++){
            sum += nums[i];
        }
        
        double max_avg = sum;
        max_avg /= k;
        ans = max_avg;
        cout << ans << " ";
        
        
        double window_avg = max_avg;
        for(int j=k; j<n; j++){
            sum += nums[j] - nums[j-k];
            window_avg = sum;
            window_avg /= k;

            ans = max(ans, window_avg);
        }
        
        
        return ans;
        
        
    }
};