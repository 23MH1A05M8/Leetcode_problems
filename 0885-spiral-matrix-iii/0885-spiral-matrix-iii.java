class Solution {
    public int[][] spiralMatrixIII(int rows, int cols, int rStart, int cStart) {
        int i=rStart;
        int j=cStart;
        List<List<Integer>> list=new ArrayList<>();
         list.add(Arrays.asList(i,j));
        int t=0;
        while(list.size()<(rows*cols))
        {
            t++;
            int c=t;
            if(c%2!=0)
            {
                while(c>0)
                {
                    j++;
                    if(i>=0&&i<rows&&j>=0&&j<cols)
                    {
                        list.add(Arrays.asList(i,j));
                    }
                    c--;
                }
                c=t;
                while(c>0)
                {
                    i++;
                    if(i>=0&&i<rows&&j>=0&&j<cols)
                    {
                        list.add(Arrays.asList(i,j));
                    }
                    c--;
                }
            }
            else {
                while(c>0)
                {
                    j--;
                    if(i>=0&&i<rows&&j>=0&&j<cols)
                    {
                        list.add(Arrays.asList(i,j));
                    }
                    c--;
                }
                c=t;
                while(c>0)
                {
                    i--;
                    if(i>=0&&i<rows&&j>=0&&j<cols)
                    {
                        list.add(Arrays.asList(i,j));
                    }
                    c--;
                }
            }
        }
        int[][] mat=new int[list.size()][2];
        for(int p=0;p<list.size();p++)
        {
            mat[p][0]=list.get(p).get(0);
            mat[p][1]=list.get(p).get(1);
        }
        return mat;
    }
}