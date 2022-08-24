int n;
cin >> n;
​
vector < vector < int >> mat(n, vector < int > (n));
​
for (int i = 0; i < n; i++) {
for (int j = 0; j < n; j++) {
cin >> mat[i][j];
}
}
​
// anti-ClockWise Rotation
​
//for(auto &vi : mat) reverse(vi.begin(), vi.end());
​
// STEP 1. Reverse Each Row (So Diagonals Match with Resultant Matrix)
for (int i = 0; i < n; i++) {
int s = 0;
int e = n - 1;
while (s < e) {
swap(mat[i][s], mat[i][e]);
e--;
s++;
}
}
​
// STEP 2. Swap upperside/lowerside with lowerside/upperside.
​
for (int i = 0; i < n; i++) {
for (int j = i + 1; j < n; j++) {
swap(mat[i][j], mat[j][i]);
}
}
​
// Print matrix
​
for (int i = 0; i < n; i++) {
for (int j = 0; j < n; j++) {
cout << mat[i][j] << " ";
}
cout << endl;
}
​
}
```
3. Code can be changed into simple form using STL
```
// ClockWise
reverse(mat.begin(), mat.end());
//Anti ClockWise
for(auto &vi : mat) reverse(vi.begin(), vi.end());
```