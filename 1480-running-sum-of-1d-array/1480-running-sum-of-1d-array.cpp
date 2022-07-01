class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        //vector<int> rnngsum = {nums[0]};
        int size = nums.size();
        for(int i=1; i<size; i++){
            nums[i] += nums[i-1];
        }
        
        return  nums;
    }
};