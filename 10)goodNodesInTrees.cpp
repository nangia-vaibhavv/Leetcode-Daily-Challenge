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
    int solve(TreeNode*root,int maxi)
    {
        if(!root)return 0;
        int count=0;
//         as if it is than maxi is not updated with any value greater than curr value that measns it is a good node
        if(root->val>=maxi)
        {
            maxi=root->val;
            count++;
        }
        return count+solve(root->left,maxi)+solve(root->right,maxi);
    }
    int goodNodes(TreeNode* root) {
        if(root==NULL)return 0;
         return solve(root,root->val);
    }
};