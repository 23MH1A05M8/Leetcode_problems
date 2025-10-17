class Solution {
    public int maxSubarraySumCircular(int[] nums) {
        int n=nums.length;
    //     int[] res=new int[2*n];
    //    for(int i=0;i<n;i++)
    //    {
    //      res[i]=nums[i];
    //      res[i+n]=nums[i];
    //    } 
    //    int c=0;
    //    int max=nums[0];
    //    for(int i=0;i<n;i++)
    //    {
    //     max=Math.max(max,nums[i]);
    //      if(nums[i]<0)
    //      {
    //         c++;
    //      }
    //    }
    //    if(c==n)
    //    {
    //     return max;
    //    }
    //    int max_sum=0;
    //    for(int i=0;i<n;i++)
    //    {
    //     int max_far=0;
    //     int max_sums=0;
    //     for(int j=i;j<i+n;j++)
    //     {
    //         max_far+=res[j];
    //         if(max_far>max_sums)
    //         {
    //             max_sums=max_far;
    //         }
    //         if(max_far<0)
    //         {
    //             max_far=0;
    //         }
    //     }
    //     max_sum=Math.max(max_sums,max_sum);
    //    }
    //    return max_sum;
    int total=0;
    int maxsum=nums[0],maxcur=0;
    int minsum=nums[0],mincur=0;
    for(int i:nums)
    {
        maxcur=Math.max(maxcur+i,i);
        maxsum=Math.max(maxsum,maxcur);
        mincur=Math.min(mincur+i,i);
        minsum=Math.min(minsum,mincur);
        total+=i;
    }
    if(maxsum<0) return maxsum;
    return Math.max(maxsum,total-minsum);
    }
}