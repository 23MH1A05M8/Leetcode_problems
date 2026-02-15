class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        int n=bulbs.size();
        vector<int> v;
        map<int,int> m;
        for(int i=0;i<n;i++)
        {
            m[bulbs[i]]++;
        }
        for(auto mp:m)
        {
            if(mp.second%2==1)
            {
                v.push_back(mp.first);
            }
        }
        return v;
    }
};