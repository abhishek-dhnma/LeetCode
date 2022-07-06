1. I used unordered_map here :
2. insert all the elements into umap and i choose unordered map beacause we dont need order here thats why. And then maintain a variavble and that maintain my count for typed of jewels can be in stones. and aty the end return that count variable. \
3. CODE :
​
```
#include <iostream>
#include <string>
#include <unordered_map>
​
using namespace std;
int main() {
string jewels;
cin >> jewels;
​
string stones;
cin >> stones;
unordered_map<char, int> map;
​
for (int i = 0; i < jewels.length(); i++) {
map[jewels[i]] = true;
}
​
int c = 0;
for (int i = 0; i < stones.length(); i++) {
if (map.find(stones[i]) != map.end()) {
c++;
}
}
​
for (auto s : map) {
cout << s.first << " " << s.second << endl;
}
​
cout << c;
}
```
​