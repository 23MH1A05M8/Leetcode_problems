class Solution {
public:
    void subsets(vector<vector<int>>& res,int n,int i,int k,vector<int>& v)
    {
        if(v.size()==k)
        {
            res.push_back(v);
            return;
        }
        if(i==n+1) return;
        v.push_back(i);
        subsets(res,n,i+1,k,v);
        v.pop_back();
        subsets(res,n,i+1,k,v);
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int> v;
        vector<vector<int>> res;
        subsets(res,n,1,k,v);
        return res;
    }
};