class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int> m;
        for(int i=0;i<n;i++)
        {
            m[nums[i]]++;
        }
        vector<pair<int,int>> v(m.size());
        int ind=0;
        for(auto mp:m)
        {
            v[ind++]={mp.second,mp.first};
        }
        sort(v.begin(),v.end(),greater<pair<int,int>>());
        vector<int> res;
        for(int i=0;i<k;i++)
        {
            res.push_back(v[i].second);
        }
        return res;
    }
};