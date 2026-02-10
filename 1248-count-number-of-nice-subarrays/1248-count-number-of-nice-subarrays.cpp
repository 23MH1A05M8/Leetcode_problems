class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int n=nums.size();
        map<int,int> m;
        m[0]=1;
        int c=0,s=0;
        for(int i=0;i<n;i++)
        {
            s+=nums[i]%2;
            if(m.find(s-k)!=m.end())
            {
                c+=m[s-k];cout<<c<<endl;
            }
            m[s]++;
        }
        return c;
    }
};