class Solution {
    public int getCommon(int[] nums1, int[] nums2)
     {
       HashSet<Integer> set1=new HashSet<>();
       HashSet<Integer> set2=new HashSet<>();
       for(int i=0;i<nums1.length;i++)
       {
        set1.add(nums1[i]);
       } 
        for(int i=0;i<nums2.length;i++)
       {
        set2.add(nums2[i]);
       } 
       set1.retainAll(set2);
       ArrayList<Integer> list=new ArrayList<>(set1);
       Collections.sort(list);
       for(int i=0;i<set1.size();i++)
       {
            return list.get(i);
       }
    
    return -1;
    }
}