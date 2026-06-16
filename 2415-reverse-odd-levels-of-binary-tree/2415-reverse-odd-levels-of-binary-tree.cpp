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
    void odd(TreeNode* leftRoot,TreeNode* rightRoot,int c)
    {
        if(leftRoot==NULL||rightRoot==NULL) return;
        // if(root==NULL) return;
        if(c%2==1)
        {
            // cout<<leftRoot->val<<" "<<rightRoot->val<<" "<<c<<endl;
            swap(leftRoot->val,rightRoot->val);
        }
        odd(leftRoot->left,rightRoot->right,c+1);
        odd(leftRoot->right,rightRoot->left,c+1);
    }
    TreeNode* reverseOddLevels(TreeNode* root) {
        if(root==NULL) return root;
        int c=1;
        odd(root->left,root->right,c);
        return root;
    }
};