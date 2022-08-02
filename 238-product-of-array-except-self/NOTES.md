}
}
​
```
TC - O(N^2)
SC - O(1)
​
- CODE 2
```
#include <iostream>
typedef long long ll;
using namespace std;
int main() {
ll n;
cin >> n;
​
ll arr[n];
​
ll prod = 1;
for(int i=0; i<n; i++){
cin >> arr[i];
prod *= arr[i];
}
​
​
for(int i=0; i<n; i++){
cout << prod/arr[i] << " ";
}
}
```
​
2. its can be make more efficient by comprise with space
- By using two extra array for calculating prefix and suffix array product except ith index.
- CODE
```
class Solution {
public:
vector<int> productExceptSelf(vector<int>& nums) {
// nums [1,2,3,4]
int n = nums.size();
vector<int> finalPrductofboth(n);
vector<int> prefixprod(n);
prefixprod[0] = 1;              // [1,0,0,0]
vector<int> suffixprod(n);
suffixprod[n-1] = 1;            // [0,0,0,0]
for(int i=1; i<n; i++){
prefixprod[i] = nums[i-1] * prefixprod[i-1];
suffixprod[n-i-1] = nums[n-i] * suffixprod[n-i];