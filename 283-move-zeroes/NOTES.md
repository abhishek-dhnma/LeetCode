class Solution {
public:
void moveZeroes(vector<int>& nums) {
// SWAPING TECHNIQUE
we are swaping non-zeros values with zero and make non-zeros values side by side
So we achiive in
int n = nums.size();int j=0;
for(int i=0; i<n; i++){
if(nums[i] != 0){
swap(nums[i], nums[j++]);
}
}
}
};