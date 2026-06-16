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
        vector<vector<int>> v;
        if(root==NULL) return v;
        queue<TreeNode*> q;
        q.push(root);
        int c=0;
        while(!q.empty())
        {
            int s=q.size();
            vector<int> level;
            c++;
            for(int i=0;i<s;i++)
            {
                TreeNode* top_ele=q.front();
                q.pop();
                level.push_back(top_ele->val);
                if(top_ele->left!=NULL){
                    q.push(top_ele->left);
                }
                if(top_ele->right!=NULL){
                    q.push(top_ele->right);
                }
            }
            if(c%2!=0)
            {
                v.push_back(level);
            }
            else{
                reverse(level.begin(),level.end());
                v.push_back(level);
            }
        }
        return v;
    }
};