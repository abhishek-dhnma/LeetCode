class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
        int n = nums.size();
        for(int i=0; i<n; i++){
            if(nums[i] == val){
                nums[i] = -1;
            }
        }
        
        int c = 0;
        
        for(int i=0; i<n; i++){
            if(nums[i] > -1){
                c++;
            }
        }
        
        sort(nums.rbegin(), nums.rend());
        
        return c;
        
        
    }
};