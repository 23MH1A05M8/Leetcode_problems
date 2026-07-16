class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int n=nums.size();
        vector<int>preGcd(n);
        int maxi=INT_MIN;
        for(int i=0;i<n;i++)
        {
            maxi=max(maxi,nums[i]);
            preGcd[i]=gcd(nums[i],maxi);
        }
        sort(preGcd.begin(),preGcd.end());
        int left=0,right=n-1;
        long long sum=0;
        while(left<right)
        {
            sum+=gcd(preGcd[left],preGcd[right]);
            left++;
            right--;
        }
        return sum;
    }
};