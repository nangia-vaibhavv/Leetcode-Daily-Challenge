class Solution {
public:
    TreeNode *construct(TreeNode *root,int val,int depth)
    {
        if(!root)
            return root;
        depth--;
        if(depth==1)
        {
                TreeNode *newNode=new TreeNode(val);
                newNode->left=root->left;
                root->left=newNode;

                TreeNode *newNode1=new TreeNode(val);
                newNode1->right=root->right;
                root->right=newNode1;
        
        }
        else
        {
            construct(root->left,val,depth);
            construct(root->right,val,depth);
        }
        return root;
    }
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(depth==1)
        {
            TreeNode *newNode=new TreeNode(val);
            newNode->left=root;
            return newNode;
        }
        return construct(root,val,depth);
    }
};