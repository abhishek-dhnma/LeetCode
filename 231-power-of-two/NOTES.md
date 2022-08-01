there is many solution for this
1. Using bitwise-And (&)
```
This uses two facts:
​
If the number is a power of two, then only 1 bit will be set in its binary representation.
If we subtract 1 from a number which is power of 2, then all the bits after the set-bit (there is only one set bit as per point-1) will become set and the set bit will be unset. i.e:
N    = 4,  000100
N-1  = 3,  000011
N    = 16, 010000
N-1  = 15, 001111
Hence, If a number is a power of 2 then
​
N & (N-1) == 0
```
2. Using fact that dividing n by n/2 should be equal to 1 if it equal to one then number is power of two otherwise not.
3.For this we can use RIGHT SHIFT ( >> ) operator which remove one zero ( in Binary repersentation ) from end 4 = 100 (binary). untill ( n>0 (greater than zero) and n%2 == 0 (Even number) ) then check if number is equal to 1 or not.
```
while( (n>0) and (n%2 == 0)){
n = n>>1;
}
​
if(n==1){
return true;
}
return false;
​
}
```
3. same logic in recursive way
```
class Solution {
public:
bool isPowerOfTwo(int n) {
if(n==0) return false;
return ((n==1) || (n%2==0 && isPowerOfTwo(n/2)));
}
};
```
​