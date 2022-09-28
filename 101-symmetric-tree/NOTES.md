This can be solved by recursively or iteratively
recursive = DFS (using function call stack)
iterative = BFS (using queue)
​
recursive code :
```
​
class Solution {
public:
​
// Create a new tree which is mirror of given tree
TreeNode * swapp(TreeNode * root) {
​
if (!root) return NULL;
​
TreeNode * newroot = new TreeNode(root -> val);
newroot -> left = swapp(root -> left);
newroot -> right = swapp(root -> right);
​
swap(newroot -> left, newroot -> right);
​
return newroot;
}
​
// LEETCODE 100 (Same Code Used Here) Check Identical and have Same root val
bool check(TreeNode * newroot, TreeNode * root) {
​
if (!root and!newroot) return true;
if (!root || !newroot) return false;
if (root -> val != newroot -> val) return false;
​
return check(newroot -> left, root -> left) and check(newroot -> right, root -> right);
​
}
​
// Main Function
bool isSymmetric(TreeNode * root) {
​
//Mirrored New Tree
TreeNode * newroot = swapp(root);
//Check Both are Identical or not
return check(newroot, root);
​
}
};
```