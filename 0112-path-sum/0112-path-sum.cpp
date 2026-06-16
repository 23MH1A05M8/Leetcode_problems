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
    bool target(TreeNode* root,int s)
    {
        if(root==NULL) return false;
        s=s-root->val;
        // else return false;
        if(s==0&&(root->left==NULL&&root->right==NULL))
        {
            return true;
        }
        return target(root->left,s)||target(root->right,s);
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root==NULL) return false;
        // if(targetSum==0&&root->val!=0) return false;
        return target(root,targetSum);
    }
};