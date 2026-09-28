class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        map<int,int> m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        vector<int> ans;
        while(m.size()!=0){
            vector<int> v;
            vector<int> rem;
            for(auto mp:m)
            {
                v.push_back(mp.first);
                m[mp.first]--;
                if(m[mp.first]==0) rem.push_back(mp.first);
            }
            for(int x:rem)
            {
                m.erase(x);
            }
            sort(v.begin(),v.end());
            for(int j=0;j<v.size();j++)
            {
                ans.push_back(v[j]);
            }
        }
        return ans;
    }
};