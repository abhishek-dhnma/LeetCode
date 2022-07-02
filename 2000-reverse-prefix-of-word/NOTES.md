1. Here I first find first occurenece of char
2. then i swap char from 0 indx to that first occurence
3. then i check if that ch is exist or not if exist then swap operation OTHERWISE not exist then return same str without changing ster.
CODE :
class Solution {
public:
string reversePrefix(string str, char ch) {
int a = -1;
​
for (int i = 0; i < str.length(); i++) {
if (ch == str[i]) {
a = i;
​
int i = 0;
int e = a;
​
while (i < e) {
swap(str[i], str[e]);
i++;
e--;
}
break;
}
}
​
if (a == -1) {
return str;
} else {
return str;
}
}
};