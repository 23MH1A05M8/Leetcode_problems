class Solution {
    public int maxContainers(int n, int w, int maxWeight) {
        int r=maxWeight/w;
        if(n*n<r)
        {
            return n*n;
        }
        else
        {
            return r;
        }
    }
}