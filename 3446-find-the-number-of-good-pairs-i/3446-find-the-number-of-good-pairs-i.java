class Solution {
    public int numberOfPairs(int[] nums1, int[] nums2, int k) {
        int n1=nums1.length;
        int n2=nums2.length;
        int c=0;
        for(int i=0;i<n1;i++)
        {
            for(int j=0;j<n2;j++)
            {
                int r=nums2[j]*k;
                if(nums1[i]%r==0)
                {
                    c++;
                }
            }
        }
        return c;
    }
}