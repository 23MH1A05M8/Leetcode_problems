class Solution {
    public int findKthPositive(int[] arr, int k) {
        // ArrayList<Integer> list=new ArrayList<>();
        HashSet<Integer> set=new HashSet<>();
        for(int i=0;i<arr.length;i++)
        {
            set.add(arr[i]);
        }
        int c=0,res=0;
        int len=k+arr.length;
        for(int i=1;i<=len;i++)
        {
            if(!set.contains(i))
            {
                c++;
            }
            if(c==k)
            {
                res=i;
                break;
            }
        }
        return res;
    }
}