class Solution {
public:
    int compareBitonicSums(vector<int>& nums) {
        long long n=nums.size();
        long long peak=0;
        long long leftsum=0,rightsum=0;
        for(int i=0;i<n-1;i++)
        {
            if(nums[i]>nums[i+1])
            {
                peak=i;
                break;
            }
        }
        for(int i=0;i<=peak;i++)
        {
            leftsum+=nums[i];
        }
        for(int i=peak;i<n;i++)
        {
            rightsum+=nums[i];
        }
       if(leftsum>rightsum)
       {
        return 0;
       }
       else if(rightsum>leftsum) return 1;
       else return -1;
    }
};