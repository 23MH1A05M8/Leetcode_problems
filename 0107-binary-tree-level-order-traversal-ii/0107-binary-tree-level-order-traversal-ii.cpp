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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> res;
        if(root==NULL) return res;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
            int s=q.size();
            vector<int> level;
            for(int i=0;i<s;i++)
            {
                TreeNode* top_ele=q.front();
                q.pop();
                level.push_back(top_ele->val);
                if(top_ele->left)
                {
                    q.push(top_ele->left);
                }
                if(top_ele->right)
                {
                    q.push(top_ele->right);
                }
            }
            res.push_back(level);
        }
        reverse(res.begin(),res.end());
        return res;
    }
};