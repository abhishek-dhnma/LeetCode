class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
        
        int ans = 0;
        nums.resize(nums.size()+1);
        int size = nums.size();
        
        
        for(int i=0;i< size; i++){
            
            if(nums[i] != i){
                ans = i;
                return ans;
                break;
            }
        }
        
        return ans;
        
    }
};