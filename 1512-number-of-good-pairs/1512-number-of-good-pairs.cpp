class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        
        int n = nums.size();
        int c = 0;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if( i<j and nums[i] == nums[j] ){
                    c++;
                }
            }
        }
        
        return c;
        
    }
};