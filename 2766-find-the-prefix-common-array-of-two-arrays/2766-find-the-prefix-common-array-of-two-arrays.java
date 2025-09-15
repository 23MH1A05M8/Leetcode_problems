class Solution {
    public int[] findThePrefixCommonArray(int[] A, int[] B) {
        int[] res=new int[A.length];
        HashSet<Integer> a1=new HashSet<>();
        HashSet<Integer> b1=new HashSet<>();
        int c=0;
        for(int i=0;i<A.length;i++)
        {
            a1.add(A[i]);
            b1.add(B[i]);
            if(a1.contains(B[i]))
            {
                c++;
            }
            if(b1.contains(A[i])&&A[i]!=B[i])
            {
                c++;
            }
            res[i]=c;
        }
        return res;
    }
}