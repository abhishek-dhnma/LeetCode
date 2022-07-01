It can be solve by two method :
1. is to change the same array.
CODE :
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
​
2. is to make a new vector and copy rnngsum into that.
CODE :
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