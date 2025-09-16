class Solution {
    public int[] intersection(int[] nums1, int[] nums2) {
        HashSet<Integer> set=new HashSet<>();
       HashSet<Integer> set1=new HashSet<>();
       for(int i=0;i<nums1.length;i++)
       {
        set.add(nums1[i]);
       }
       for(int i=0;i<nums2.length;i++)
       {
        set1.add(nums2[i]);
       }
      set.retainAll(set1);
      int[] res=new int[set.size()];
      int index=0;
      for(int i:set)
      {
        res[index++]=i;
      }
      return res;
    }
}