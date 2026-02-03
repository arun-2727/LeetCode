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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>res;
        queue<TreeNode*>q;
        if(!root)return {};
        q.push(root);
        int j=0;
        while(!q.empty())
        {   
            j++;
            int n=q.size();
            vector<int>level;
            for(int i=0;i<n;i++)
            {
                TreeNode* node=q.front();
                q.pop();
                level.push_back(node->val);
                if(node->left)q.push(node->left);
                if(node->right)q.push(node->right);

            }
            if(j%2==0)
            {
                reverse(level.begin(),level.end());
                res.push_back(level);
            }
            else
            {
                res.push_back(level);
            }
        }
        return res;
    }
};