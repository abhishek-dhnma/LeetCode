Making another vector here but we can do same thing with same nums(vector) in the question.
​
int size = nums.size();
int n2 = 2*size;
vector<int> ans(n2);
for(int i = 0; i < n2; i++ ){
if(i < n2/2){
​
ans[i] = nums[i];
​
}else{
int ss = i - size;
ans[i] = nums[ss];
cout << ss << " ";
}
}
return ans;
Now Check Soluton file
nums.insert( nums.end(), nums.begin(), nums.end() );
return nums;
Syntax :
(  vector_name.insert(position, iterator1, iterator2) )