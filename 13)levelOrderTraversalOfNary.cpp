/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>>ans;
        if(root==NULL)return {};
        queue<Node*>q;
        q.push(root);
        while(!q.empty())
        {
            int len=q.size();
            vector<int>res;
            for(int i=0;i<len;i++)
            {
                Node *temp=q.front();
                q.pop();
                res.push_back(temp->val);
                for(auto n:temp->children)
                    q.push(n);
            }
            ans.push_back(res);
        }
        return ans;
    }
};