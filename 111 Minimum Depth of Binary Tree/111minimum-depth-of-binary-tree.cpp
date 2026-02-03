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
    int minDepth(TreeNode* root) {
        int d=1;
        queue<TreeNode*>q;
        if(!root)return 0;
        q.push(root);
        while(!q.empty())
        {
            int n=q.size();
            
            for(int i=0;i<n;i++)
            {
                TreeNode* node=q.front();
                q.pop();
                if(!node->left && !node->right)
                {
                    return d;
                }
                if(node->left)q.push(node->left);
                if(node->right)q.push(node->right);
            }
            d++;

        }
        return d;
    }
};