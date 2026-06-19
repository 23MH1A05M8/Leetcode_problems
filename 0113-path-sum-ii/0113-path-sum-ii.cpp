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
    void paths(TreeNode* root,vector<int> v, vector<vector<int>>& res,int s)
    {
        if(root==NULL) return;
        s=s-root->val;
        v.push_back(root->val);
        if(s==0&&root->left==NULL&&root->right==NULL)
        {
            res.push_back(v);
        }
        paths(root->left,v,res,s);
        paths(root->right,v,res,s);
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
       vector<vector<int>> res;
       if(root==NULL) return res;
        vector<int> v;
        paths(root,v,res,targetSum);
        return res;
    }
};