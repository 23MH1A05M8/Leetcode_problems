class Solution {
    public int findKthPositive(int[] arr, int k) {
        int c = 0, n = arr.length;
        for(int i=0;i<n;i++)
        {
            if(i==0)
            {
                c += (arr[i]-1);
                if(c>=k)
                {
                    return k;
                }
            }
            else
            {
                c += (arr[i]-arr[i-1]-1);
            }
            if(c==k)
            {
                return arr[i]-1;
            }
            else if(c>k && i!=0)
            {
                c -= (arr[i]-arr[i-1]-1);
                return arr[i-1] + (k-c);
            }
        }
        return arr[n-1]+(k-c);
    }
}