This Question Can Be Solved By Many Way
More Details  - https://www.enjoyalgorithms.com/blog/product-of-array-except-self
​
1. Way - Brute Force
- Divide whole array prod with every elements ( wholeprod/arr[i] )
- Use two nested loops if i == j then skip otherwise calculate prod
- Code
```
#include <iostream>
​
using namespace std;
int main() {
long long n;
cin >> n;
​
long long arr[n];
​
// int prod = 1;
for (int i = 0; i < n; i++) {
cin >> arr[i];
}
​
long long ans[n];
​
for (int i = 0; i < n; i++) {
long long prod = 1;
for (int j = 0; j < n; j++) {
if (i == j) {
continue;
}
prod = prod * arr[j];
}
​
ans[i] = prod;