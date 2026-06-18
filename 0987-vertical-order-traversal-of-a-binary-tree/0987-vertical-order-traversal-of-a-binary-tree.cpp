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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        queue<pair<TreeNode*,pair<int,int>>> q;
        map<int,map<int,multiset<int>>> m;
        q.push({root,{0,0}});
        while(!q.empty())
        {
            auto q_ele=q.front();
            q.pop();
            TreeNode* node=q_ele.first;
            int x=q_ele.second.first,y=q_ele.second.second;
            m[x][y].insert(node->val);
            if(node->left)
            {
                q.push({node->left,{x-1,y+1}});
            }
            if(node->right)
            {
                q.push({node->right,{x+1,y+1}});
            }
        }
        vector<vector<int>> ans;
        for(auto p:m)
        {
            vector<int> res;
            for(auto r:p.second)
            {
                res.insert(res.end(),r.second.begin(),r.second.end());
            }
            ans.push_back(res);
        }
        return ans;
    }
};