class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n= nums.size();
        
        int flag = false;
        
        for(int i=1; i<=n-1; i++){

        for(int j=0; j<n-i; j++){
            if(nums[j] > nums[j+1]){
                swap(nums[j], nums[j+1]);
                flag = true;
            }
        }
            
            if(flag == false){
                break;
            }
    }
        
        
    }
};