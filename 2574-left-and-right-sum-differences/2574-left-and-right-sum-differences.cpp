class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n=nums.size();
        int leftsum[n];
        int rightsum[n];
        leftsum[0]=0;
        rightsum[n-1]=0;
        for(int i=1;i<n;i++)
        {
            leftsum[i]=leftsum[i-1]+nums[i-1];
            // cout<<leftsum[i]<<endl;
        }
        for(int i=n-2;i>=0;i--)
        {
            rightsum[i]=rightsum[i+1]+nums[i+1];
            cout<<rightsum[i]<<endl;
        }
        vector<int> v;
        for(int i=0;i<n;i++)
        {
            v.push_back(abs(leftsum[i]-rightsum[i]));
        }
        return v;
    }
};