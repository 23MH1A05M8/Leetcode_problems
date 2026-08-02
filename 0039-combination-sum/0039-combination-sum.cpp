class Solution {
public:
    void subsets(int i,vector<int>& candidates,int target,long long sum,vector<vector<int>>& s,vector<int>&v)
    {
        if(i==candidates.size()){
            if(sum==target)
            {
                s.push_back(v);
                return;
            }
            return ;
        }
        if(sum==target){
            s.push_back(v);
            return;
        } 
        if((sum+candidates[i])<=target){
            v.push_back(candidates[i]);
            subsets(i,candidates,target,sum+candidates[i],s,v);
            v.pop_back();
        }
        subsets(i+1,candidates,target,sum,s,v);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> s;
        vector<int> v;
        subsets(0,candidates,target,0,s,v);
        return s;
    }

};