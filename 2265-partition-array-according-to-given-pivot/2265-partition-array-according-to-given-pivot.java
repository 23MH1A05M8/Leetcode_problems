class Solution {
    public int[] pivotArray(int[] nums, int pivot) {
        int n=nums.length;
        int index=0;
        int[] arr=new int[n];
        for(int i=0;i<n;i++)
        {
            if(nums[i]<pivot)
            {
                arr[index++]=nums[i];
            }
        }
         for(int i=0;i<n;i++)
        {
            if(nums[i]==pivot)
            {
                arr[index++]=nums[i];
            }
        }
         for(int i=0;i<n;i++)
        {
            if(nums[i]>pivot)
            {
                arr[index++]=nums[i];
            }
        }
        return arr;
    }
}