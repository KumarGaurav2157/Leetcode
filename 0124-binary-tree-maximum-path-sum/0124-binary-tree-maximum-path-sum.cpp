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
public:
      int maxi=INT_MIN;
      int calc(TreeNode*root)
      {
        if(root==NULL)
        return 0;
        int l=calc(root->left);
        int r=calc(root->right);
        int m1= root->val+l+r;
        int m2=max(l,r)+root->val;
        int m3=root->val;
        maxi=max({m1,m2,m3,maxi});
        return max({m2,m3});
      }
    int maxPathSum(TreeNode* root) {
       calc(root);
       return maxi; 
    }
};