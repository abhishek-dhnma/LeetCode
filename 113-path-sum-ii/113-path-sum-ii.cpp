/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    
     void fun(TreeNode * root, vector < int > ans, int cur_sum, vector < vector < int >>& finalans) {
      if (root == NULL) {
        return;
      }

      ans.push_back(root -> val);

      if (root->val == cur_sum && root -> left == NULL && root -> right == NULL) {
        finalans.push_back(ans);
      }

      fun(root -> left,  ans, cur_sum - root -> val, finalans);
      fun(root -> right, ans, cur_sum - root -> val, finalans);

     // ans.pop_back();

    }
    
  public:

   

  vector < vector < int >> pathSum(TreeNode * root, int targetSum) {

    vector < vector < int >> finalans;
    vector < int > ans;
    int cur_sum = 0;
    fun(root,  ans, targetSum, finalans);

    return finalans;
  }
};