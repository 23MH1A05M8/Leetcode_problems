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
    TreeNode* findNewRoot(TreeNode* root)
    {
        if(root->right==NULL) return root;
        return findNewRoot(root->right);
    }
    TreeNode* subTree(TreeNode* root)
    {
        if(root->left==NULL)
        {
            return root->right;
        }
        if(root->right==NULL)
        {
            return root->left;
        }
        TreeNode* rightTree=root->right;
        TreeNode* newRoot=findNewRoot(root->left);
        newRoot->right=rightTree;
        return root->left;
    }
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root==NULL) return root;
        if(root->val==key) return subTree(root);
        TreeNode* dummy=root;
        while(dummy)
        {
            if(dummy->val>key)
            {
                if(dummy->left!=NULL&&dummy->left->val==key)
                {
                    dummy->left=subTree(dummy->left);
                    break;
                }
                else{
                    dummy=dummy->left;
                }
            }
            else{
                if(dummy->right!=NULL&&dummy->right->val==key)
                {
                    dummy->right=subTree(dummy->right);
                    break;
                }
                else{
                    dummy=dummy->right;
                }
            }
        }
        return root;
    }
};