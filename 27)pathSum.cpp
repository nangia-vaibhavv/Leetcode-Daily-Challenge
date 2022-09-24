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
    vector<vector<int>>ans;
    void solve(TreeNode *root,int target,vector<int>res,int sum)
    {
        if(root==NULL)return;
        res.push_back(root->val);
        sum+=root->val;
        if(root->left== NULL && root->right==NULL)
        {
            if(sum==target)ans.push_back(res);
        }
        solve(root->left,target,res,sum);
        solve(root->right,target,res,sum);
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int>res;
        solve(root,targetSum,res,0);
        return ans;
    }
};