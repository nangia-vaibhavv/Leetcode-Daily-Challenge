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
    bool pathSum(TreeNode *root,int targetSum,int presentSum)
    {
        int currentSum=presentSum;
        if(root==NULL) return false;
        currentSum+=root->val;
        if(currentSum==targetSum && root->left==NULL && root->right==NULL)
        {
            return true;
        }
         return (pathSum(root->left,targetSum,currentSum)|| pathSum(root->right,targetSum,currentSum));
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        int presentSum=0;
        return pathSum(root,targetSum,presentSum);
    }
};