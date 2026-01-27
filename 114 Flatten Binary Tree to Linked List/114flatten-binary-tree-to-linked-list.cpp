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
    vector<TreeNode*>res;
    void preorder(TreeNode* root)
    {
        if(root==nullptr)return;
        res.push_back(root);
        preorder(root->left);
        preorder(root->right);
        
    }
public:
    void flatten(TreeNode* root) {
       preorder(root);
       res.push_back(nullptr);
       for(int i=0;i<res.size()-1;i++)
       {
        res[i]->right=res[i+1];
        res[i]->left=nullptr;
       } 
    }
};