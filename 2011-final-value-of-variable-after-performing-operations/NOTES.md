1. First Approach Match whole string CODE :
```
class Solution {
public:
int finalValueAfterOperations(vector<string>& operations) {
int x = 0;
for(int i=0; i<operations.size(); i++){
if(operations[i] == "--X" or operations[i] == "X--"){
x -= 1;
}
else if(operations[i] == "X++" or operations[i] == "++X"){
x += 1;
}
}
return x;
}
};
```
​
2. Check First Element of string elements if it + or -. CODE :
```
​
```