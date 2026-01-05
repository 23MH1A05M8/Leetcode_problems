class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        long long s=0;
        int c=0;
        int mini=INT_MAX;
        int i=0,j=0;
        while(j<n)
        {
            s+=nums[j];
            while(s>=target)
            {
                mini=min(mini,j-i+1);
                s-=nums[i];
                c--;
                i++;
                cout<<mini<<endl;
            }
             j++;
        }
        return mini == INT_MAX ? 0 : mini;;
    }
};