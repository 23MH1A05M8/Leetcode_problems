class Solution {
    public List<Integer> spiralOrder(int[][] matrix) {
        ArrayList<Integer> spirallist=new ArrayList<>();
       int left=0,top=0,right=matrix[0].length-1,bottom=matrix.length-1; 
       while(left<=right&&top<=bottom){
            for(int i=left;i<=right;i++)
            {
                spirallist.add(matrix[top][i]);
            }
            top++;
            for(int i=top;i<=bottom;i++)
            {
                spirallist.add(matrix[i][right]);
            }
            right--;
            if(top<=bottom){
            for(int i=right;i>=left;i--)
            {
                spirallist.add(matrix[bottom][i]);
            }
            bottom--;
            }
            if(left<=right){
            for(int i=bottom;i>=top;i--)
            {
                spirallist.add(matrix[i][left]);
            }
            left++;
            }
       }
       return spirallist;
    }
}