if (node1->val != node2->val) return false;
check.push(node1->left);
check.push(node2->right);
check.push(node1->right);
check.push(node2->left);
}
}
return true;
}
};
```
TWO QUEUE
```
class Solution {
public:
bool isSymmetric(TreeNode *root) {
TreeNode *left, *right;
if (!root)
return true;
queue<TreeNode*> q1, q2;
q1.push(root->left);
q2.push(root->right);
while (!q1.empty() && !q2.empty()){
left = q1.front();
q1.pop();
right = q2.front();
q2.pop();
if (NULL == left && NULL == right)
continue;
if (NULL == left || NULL == right)
return false;
if (left->val != right->val)
return false;
q1.push(left->left);
q1.push(left->right);
q2.push(right->right);
q2.push(right->left);
}
return true;
}
};
```
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