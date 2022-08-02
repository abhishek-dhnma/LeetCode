​
unordered_map<int, vector<int>> map;
vector<vector<int>> ans;
​
for (int i = 0; i < groupSizes.size(); i++) {
int key = groupSizes[i];
​
if (map.count(key) > 0) {
map[key].push_back(i);
​
} else {
map[key] = vector<int>{i};
}
​
if (map[key].size() == key) {
ans.push_back(map[key]);
map[key].clear();
}
}
​
for (auto xx : ans) {
for (auto cc : xx) {
cout << cc << " ";
}
cout << endl;
}
}
​
```
​