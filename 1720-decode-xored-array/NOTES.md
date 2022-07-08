1. Since that encoded[i] = arr[i] XOR arr[i+1], then arr[i+1] = encoded[i] XOR arr[i].
2. Iterate on i from beginning to end, and set arr[i+1] = encoded[i] XOR arr[i].
3. As we given first of answer-array/decoded array. ans[0] = first;
​
```
class Solution {
public:
vector<int> decode(vector<int>& encoded, int first) {
int size = encoded.size();
vector<int> ans(size+1);
ans[0] = first;
for(int i=0; i<size; i++){
ans[i+1] = encoded[i] ^ ans[i];
}
return ans;
}
};
```