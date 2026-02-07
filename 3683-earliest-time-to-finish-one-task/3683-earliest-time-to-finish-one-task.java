class Solution {
    public int earliestTime(int[][] tasks) {
        HashSet<Integer> set=new HashSet<>();  
        for(int i=0;i<tasks.length;i++)
        {
            int r=0;
            for(int j=0;j<tasks[i].length;j++)
            {
               r+=tasks[i][j];
            }
            set.add(r);
        }
        
        int res=Collections.min(set);
        return res;
    }
}