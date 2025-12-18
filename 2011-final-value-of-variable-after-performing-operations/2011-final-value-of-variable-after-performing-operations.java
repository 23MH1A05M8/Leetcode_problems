class Solution {
    public int finalValueAfterOperations(String[] operations) {
        int d=0;
        for(int i=0;i<operations.length;i++)
        {
            if(operations[i].charAt(1)=='+')
            {
                d=d+1;
            }
            else
            {
                d=d-1;
            }
        }
        return d;
    }
}