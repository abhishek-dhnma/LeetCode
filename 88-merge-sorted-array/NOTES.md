1. We Use Two Pointer Approach Here
2. we use i and j pointer to point num1 and nums2 array last index
3. We choose from backside because it become east to insert from the last beacuse if we choose to insert from the front then we need to shift all other one step forward to make space for new element.
4. But if we choose from back side then it very easy to insert from the last.
5. k pointer whih point last element of first array m+n-1;
6. IMP TO NOTE : here it possible that second element still have some element in it. so we need to check after first loop exit like second array still have any elemet if it have then we need to insert them to First  array,
7. CODE :
```
class Solution {
public:
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
int i = m-1;
int j = n-1;
int k = m+n-1;
while(i>=0 and j>=0){
if(nums1[i]<nums2[j]){
nums1[k] = nums2[j];
j--;
k--;
}else {
nums1[k] = nums1[i];
i--;
k--;
}
}
// Check if Second Element still have some element if yes them insert them in First Arraty
while(j >=0){
nums1[k] = nums2[j];
k--;
j--;
}
}
};
```