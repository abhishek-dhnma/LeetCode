Recurive is normal way
iteratively - we use stack (algo is kind of level order traveral using QUEUE)
Moriss Traverals - its dont use call stack( Recursive) and dont use stack.
​
Normal Recursive Code
class Solution {
public:
void inorder(TreeNode* root,vector<int> & ans){
if(root == NULL){
return;
}
inorder(root->left, ans);
ans.push_back(root->val);
inorder(root->right, ans);
}
vector<int> inorderTraversal(TreeNode* root) {
vector<int> ans;
inorder(root, ans);
return ans;
}
};