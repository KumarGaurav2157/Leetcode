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
    int maxLevelSum(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        int maxi=INT_MIN;
        int level=1;
        int ans=0;
        while(!q.empty())
        {
            int size=q.size();
            int sum=0;
            for(int i=0;i<size;i++)
            {
                root=q.front();
                sum+=root->val;
                q.pop();
                if(root->left)
                q.push(root->left);
                if(root->right)
                q.push(root->right);

            }
            if(sum>maxi)
            {
                maxi=sum;
                ans=level;
            }
            level++;
        }
        return ans;
    }
};