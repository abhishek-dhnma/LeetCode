1. It can be solved by using two FOR loops but here we can dont take advantage of GIVEN condition (SORTED ARRAY GIVEn).
2. As they give sorted array we can think of binary search type technique which we gonna use in this question.
3. We can use two for loop Brute force approach TC → O(n2)  But There this one good technique which makes TC in O(N) in one loop  :) START : FIRST SORT THE ARRAY - ITS GIVEN so We use Kind Off  binary search. after that Main concept is we add start and ending index elements of array and check if they are equal or not and if equal then print otherwise check sum is greater or lesser than target if do this until start is lesser than end. this Makes TC → O(n) + O(n long n) for Binary search and ignore O (n log n) To get O(n) TC
​
CODE :
```
class Solution {
public:
vector<int> twoSum(vector<int>& numbers, int target) {
int size = numbers.size();
int s = 0;
int e = size-1;
while(s < e){
int sum = numbers[s] + numbers[e];
if(sum == target){
return {s+1, e+1};
}else if(sum > target){
e--;
}else{
s++;
}
}
return {-1,-1};
}
};
```