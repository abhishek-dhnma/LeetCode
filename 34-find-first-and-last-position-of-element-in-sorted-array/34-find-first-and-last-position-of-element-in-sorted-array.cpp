class Solution {
public:
    
    int ModifiedbinarySearch(vector<int> nums, int target, int selectOccurrence){
        
        int n = nums.size();
        int s = 0;
        int e = n-1;
        int mid;
        int ans = -1;
        
        while(s<=e){
            
            mid = s + ((e-s)>>1);
            
            if(nums[mid] == target){
                ans = mid;
                if(selectOccurrence){
                    e= mid-1;
                }else{
                    s = mid+1;
                }
            }else if(nums[mid] < target){
                s = mid+1;
            }else{
                e = mid-1;
            }
            
        }
        
        return ans;
    }
        
    vector<int> searchRange(vector<int>& nums, int target) {
       
        vector<int> ans;
        
       ans.push_back(ModifiedbinarySearch(nums,target,1));
        ans.push_back(ModifiedbinarySearch(nums,target,0));
        
        return ans;
        
    }
};