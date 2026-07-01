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
    void minEle(TreeNode* root,int& k,priority_queue<int>& pq)
    {
        if(k==0)
        {
            if(pq.top()>root->val)
            {
                pq.pop();
                pq.push(root->val);
            }
        }
        else{
            pq.push(root->val);
            k--;
        }
        if(root->left) minEle(root->left,k,pq);
        if(root->right) minEle(root->right,k,pq);
    }
    int kthSmallest(TreeNode* root, int k) {
        if(root==NULL) return 0;
        priority_queue<int> pq;
        minEle(root,k,pq); 
        return pq.top();
    }
};