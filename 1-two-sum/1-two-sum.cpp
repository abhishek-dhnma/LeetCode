class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        int size = nums.size();
        
        vector <int> ans;
        
        unordered_map<int, int> map;
        
        for(int i=0; i<size; i++){
            
            int sum = target - nums[i];
            
            if(map.find( sum ) != map.end()){
                
                ans.push_back( i );
                ans.push_back( map[sum] );
                return ans;
                
            }else{
                map[ nums[i] ] = i;
            }
        }
        
        return ans;
        
        
    }
};