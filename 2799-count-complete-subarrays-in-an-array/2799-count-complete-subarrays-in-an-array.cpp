class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        int n=nums.size();
        set<int> s1;
        for(int i=0;i<n;i++)
        {
            s1.insert(nums[i]);
        }
        int c=0;
        for(int i=0;i<n;i++)
        {
            set<int> s;
            for(int j=i;j<n;j++)
            {
                s.insert(nums[j]);
                if(s.size()==s1.size())
                {
                    c++;
                }
            }
        }
        return c;
    }
};