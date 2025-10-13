class Solution {
    public int addedInteger(int[] nums1, int[] nums2) {
        Arrays.sort(nums2);
        Arrays.sort(nums1);
        int s=0;
        for(int i=0;i<nums1.length;i++)
        {
            s+=nums2[i]-nums1[i];
            break;
            // System.out.println(s);
        }
        return s;
    }
}