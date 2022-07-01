class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> rnngsum = {nums[0]};
        int size = nums.size();
        for(int i=1; i<size; i++){
            rnngsum.push_back( rnngsum[i-1] + nums[i] );
        }
        
        return  rnngsum;
    }
};