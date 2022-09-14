https://www.callicoder.com/find-minimum-element-in-rotated-sorted-array/
Find the Minimum element in Rotated Sorted Array
This problem is a variation of the problem Search an element in a Rotated Sorted Array.
​
If you analyze the examples closely, you will notice that the minimum element is the only element in the given rotated sorted array that is smaller than its previous element.
​
The minimum element is also the pivot element. The subarray on the left of the pivot and on the right of the pivot are sorted.
​
We will use this property to find the minimum element using binary search:
​
```
int findMin(vector<int>& arr) {
int n = arr.size();
int s =0;
int e = n-1;
// If the first element is less than the last element then there is no rotation. The first element is minimum.
if(arr[s] <= arr[e]){
return arr[s];
}
​
while(s <= e){
​
int mid = s + ((e-s)>>1);
// If the middle element is smaller than its previous element, then it is the minimum element
if(mid > 0 and arr[mid] < arr[mid-1]){
return arr[mid];
}
\// If the middle is greater than its next element, then the next element is the minimum element
if(mid < n-1 and arr[mid+1] < arr[mid] ){
return arr[mid+1];
}
​
// left array is sorted. So the pivot is on the right side
if(arr[s] <= arr[mid]){
s = mid+1;
}else{
//right array is sorted. So the pivot is on the left side
e = mid-1;
}
}
return -1;
}
```