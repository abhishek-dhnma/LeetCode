1. We are using same array/vector to get our solution.
2. 1 loop Take Charge of : Number of iterations/Like how many times we calculate our sum%10
3. and we size-- which is did like size of 5 nums we just need to n-2 elements.
4. 2nd Loop Take charge of calculation and insert sum%10 into nums[indx]
5. after returm 1st elemet of vector which stores our answer
```
class Solution {
public:
int triangularSum(vector<int>& nums) {
int size = nums.size();
for(int i=0; i < nums.size() -1; i++){
size--;
for(int j=0; j<size; j++){
nums[j] = (nums[j] + nums[j+1]) % 10;
}
}
return nums[0];
}
};
```