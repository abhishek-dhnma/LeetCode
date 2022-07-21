1. Good Video to understand How to detect overflow of integer and how to perevent it. https://www.youtube.com/watch?v=HAgLH58IgJQ
2. We need to check/detect before adding last digit to reverse variable;
3. Because if that number is greater the INT_MAX((2power31) -1) and  smaller than INT_MIN(-2power31) Then we need to return 0;
4. what we do is we check that reverse number (which make upto) is greater or smaller than int Limits. AND how we so that but  reverse_number untill now is >INT_MAX/10 and < INT_MIN.
5. If that number is equal to value one less than INT_MIN or INT_MAX. then in that ase we chek if that is > 7 in case if positive value and < -8 in case of negative value.
6.  CONDITIONS WILL LOOK LIKE THIS
```
if (rev > INT_MAX/10 || (rev == INT_MAX / 10 && d > 7)) return 0; //in case of + number
if (rev < INT_MIN/10 || (rev == INT_MIN / 10 && d < -8)) return 0; //in case of - number
```