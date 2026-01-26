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
    bool pathsum(TreeNode* root,int targetSum)
    {
        if(!root)return false;
        if(root->left==nullptr && root->right==nullptr)
        {
            if(targetSum==root->val)
            {
                return true;
            }
            else 
            {
                return false;
            }
        }
        int remaining=targetSum-root->val;

        return pathsum(root->left,remaining)||pathsum(root->right,remaining);
    }
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        return pathsum(root,targetSum);
    }
};