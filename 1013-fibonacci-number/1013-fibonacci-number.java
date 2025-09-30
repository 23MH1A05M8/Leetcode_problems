class Solution {
    public int fib(int n) {
        // if(n==0||n==1)
        // {
        //     return n;
        // }
        // return fib(n-1)+fib(n-2);
        if(n==0)
        return 0;
        if(n==1)
        return 1;
        int[] fibarr=new int[n+1];
        fibarr[0]=0;
        fibarr[1]=1;
        for(int i=2;i<=n;i++)
        {
            fibarr[i]=fibarr[i-1]+fibarr[i-2];
        }
        return fibarr[n];
    }
}