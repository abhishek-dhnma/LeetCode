1. This problem can be solved by many ways
2. First Way : Make all Target values equal to -1 and then count numbers exclude target value. Then reverse sort your array because our target value is smallest(-1) so it will automatically comes at end And Then return count and array
3. Second Way : We can use Two Pointer Approch. find your target in the array and then Swap that element with last element of the array and then count swap count minus that with array size you get count of non-taget elemets return that (We can move all the occurrences of this element to the end of the array. Use two pointers)
4. CODE : FIRST Approch
```
class Solution {
public:
int removeElement(vector<int>& nums, int val) {
int n = nums.size();
for(int i=0; i<n; i++){
if(nums[i] == val){
nums[i] = -1;
}
}
int c = 0;
for(int i=0; i<n; i++){
if(nums[i] > -1){
c++;
}
}
sort(nums.rbegin(), nums.rend());
return c;
}
};
```
​