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
    void path(TreeNode* root,string s,vector<string>& res)
    {
        if(root==NULL) return;
        if(root->left==NULL&&root->right==NULL)
        {
            s+=to_string(root->val);
            res.push_back(s);
        }
        s+=to_string(root->val)+"->";
        path(root->left,s,res);
        path(root->right,s,res);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> res;
        string s="";
        path(root,s,res);
        return res;
    }
};