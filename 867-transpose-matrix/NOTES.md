Basic Brute/ Intuitive Approach (C++)  :
1. Creating a 2D Vector with row is equal to column size ( of original matrix) and column is equal to rows size (original matrix).
2. Matrix Transpose means A = A' , Whicyh Means All rows converted into column and all column converted into row.
3.   vector<vector<int>> Ans(c, vector<int> (r,0));
4.   vector size of c and having each element is vector of size r and initial them with zero.
​
```
class Solution {
public:
vector<vector<int>> transpose(vector<vector<int>>& matrix) {
int r = matrix.size();
int c = matrix[0].size();
vector<vector<int>> Ans(c, vector<int> (r,0));
for(int i=0; i<r; i++){
for(int j=0; j<c; j++){
Ans[j][i] = matrix[i][j];
}
}
return Ans;
}
};
```
​