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
    int deepestLeavesSum(TreeNode* root) {
        int sum=0;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
            sum=0;
            int n=q.size();
            for(int i=0;i<n;i++)
            {
                TreeNode* top_ele=q.front();
                q.pop();
                sum+=top_ele->val;
                if(top_ele->left) q.push(top_ele->left);
                if(top_ele->right) q.push(top_ele->right);
            }
        }
        return sum;
    }
};