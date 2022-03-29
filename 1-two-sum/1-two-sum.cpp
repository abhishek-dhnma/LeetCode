class Solution {
public:
    
    vector<int> twoSum(vector<int>& nums, int target) {
        
        int n = nums.size();
        vector<int> ans;
        
        unordered_map<int, int> hashmap;
        
        for(int i=0; i<n; i++){
            
            int sum = target - nums[i];
            
            if( hashmap.find( sum ) != hashmap.end() ){
                
                ans.push_back( i );
                ans.push_back( hashmap[sum] );
                return ans;
                
            }else{
                
                hashmap[nums[i]] = i;
                
            }
            
        }
        
        
        
        return ans;
     
        
    }
};