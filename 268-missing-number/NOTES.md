Time Complexity: O(N)
Space Complexity : O(1)**
```
class Solution {
public:
int missingNumber(vector<int>& nums) { // function to return missing number
int result = nums.size(); // initialize result to size of vector
int i=0; // initialize i to 0
for(int num:nums){ // for each number in vector
result ^= num; // XOR result with number
result ^= i; // XOR result with i
i++; // increment i
}
return result; // return result that is the missing number
}
};
```
**1 Line Approach
Time Complexity: O(N)
Space Complexity : O(1)**
```
class Solution {
public:
int missingNumber(vector<int>& nums) {
return nums.size() * (nums.size() + 1) / 2 - accumulate(nums.begin(), nums.end(), 0);
}
};
```
4. The operation of xor is commutative and associative. That is A ^ B = B^A and (A ^ B) ^ C = A ^ (B ^ C). Therefore, A^C^B^A^C = A^A^C^C^B = B.
5.