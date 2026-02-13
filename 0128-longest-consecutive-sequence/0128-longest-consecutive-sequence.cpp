class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if(n==0) return 0;
        if(n==1) return 1;
        sort(nums.begin(),nums.end());
        int maxi=INT_MIN;
        int c=1;
        for(int i=1;i<n;i++)
        {
            if(nums[i]==nums[i-1]){
               continue;
            }
            else if(nums[i]==nums[i-1]+1)
            {
                cout<<nums[i]<<endl;
                c++;
            }
            else{
                c=1;
            }
            maxi=max(maxi,c);
        }
        return maxi;
    }
};