class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        int n=arr1.size();
        map<int,int> m;
        for(int i=0;i<n;i++)
        {
            m[arr1[i]]++;
        }
        vector<int> v;
        for(int ele:arr2)
        {
            while(m[ele]>0)
            {
                v.push_back(ele);
                m[ele]--;
            }
        }
        for(auto mp:m)
        {
            while(mp.second>0)
            {
                v.push_back(mp.first);
                mp.second--;
            }
        }
        return v;
    }
};