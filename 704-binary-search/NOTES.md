1. mid = s+e/2 it will give us overflow; aka worst, very easy to overflow
2. mid = s + (e-s)/2. Improve version but its still maybe give overflow aka much better, but still possible
3. mid = s + ((e-s)>>1). best
4.right shift 1 times which is equal to n(x) = n(x) >> 2(b); means we divide the number by factor of 2power(b). where b is the number if times we what to right shift.
5."x >> 1" is equivalent of "x // 2" which is "floor division". It's very fast because it just shifts the integer by one bit to the right.
​
Example:
"8" in binary is:
1000
​
If I shift it to the right by one bit, it becomes "4" (8 // 2 == 4):
0100
​
You can see that the number got "floor divided".
​
​