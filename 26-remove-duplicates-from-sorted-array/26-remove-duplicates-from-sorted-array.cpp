class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int k = 0;
        int n = nums.size();
        int ans = 1;

      
        for(int j=1; j<n; j++){
            if(nums[k] != nums[j]){
                k++;
                nums[k] = nums[j];
                ans++;
            } 
        }
        
        return ans;
        
    }
};