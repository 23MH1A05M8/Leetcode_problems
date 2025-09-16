class Solution {
    public int[] kWeakestRows(int[][] mat, int k) {
        int[][] res=new int[mat.length][mat.length];
        for(int i=0;i<mat.length;i++)
        {
            int oc=0;
            for(int j=0;j<mat[i].length;j++)
            {
                if(mat[i][j]==1)
                {
                    oc++;
                }
            }
            res[i][0]=oc;
            res[i][1]=i;
        }
        Arrays.sort(res,(a,b)->{
            if(a[0]==b[0]) return a[1]-b[1];
            return a[0]-b[0];
        });
        int[] result=new int[k];
        for(int i=0;i<k;i++)
        {
            result[i]=res[i][1];
        }
        return result;
    }
}