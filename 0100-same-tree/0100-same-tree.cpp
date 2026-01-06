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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        vector<int>a1;
        vector<int>a2;
        traversal(p,a1);
        traversal(q,a2);
        if(a1.size()!=a2.size())
        return false;
        for(int i=0;i<a1.size();i++)
        {
            if(a1[i]!=a2[i])
            return false;
        }
        return true;

    }
    void traversal(TreeNode* root,vector<int>&arr)
    {
        if(root==NULL)
        {
            arr.push_back(0);
        return;
        }
      arr.push_back(root->val);
      traversal(root->left,arr);
      traversal(root->right,arr);
    }
};