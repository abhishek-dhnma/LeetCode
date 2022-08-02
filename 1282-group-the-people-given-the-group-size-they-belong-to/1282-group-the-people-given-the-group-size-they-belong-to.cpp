class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
    unordered_map <int, vector<int>> m;
    vector<vector<int>> ans;
        
        
    for(int i=0; i<groupSizes.size(); i++){
        m[groupSizes[i]].push_back(i);       
    }
        
      for(auto &xx : m){

    auto gsize = xx.first;
    auto index = xx.second;

    for(int i=0; i < index.size()/gsize; i++){
           vector<int> list;
        copy(index.begin() + i * gsize, index.begin() + (i + 1) * gsize,back_inserter(list));
        ans.push_back(list);
    }

}  
        
        return ans;
        
    }
};