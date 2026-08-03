class Solution {
public:
    void valid(vector<string>& res,int n,string s,int oc,int cc)
    {
        if(s.size()==2*n)
        {
            res.push_back(s);
            return ;
        }
        if(oc<n)
        {
            valid(res,n,s+"(",oc+1,cc);
        }
        if(cc<oc)
        {
            valid(res,n,s+")",oc,cc+1);
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        string s="";
        valid(res,n,s,0,0);
        return res;
    }
};