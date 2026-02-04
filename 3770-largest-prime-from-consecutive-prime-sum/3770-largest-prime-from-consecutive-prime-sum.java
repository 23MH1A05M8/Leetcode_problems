class Solution {
    public boolean isPrime(int num)
    {
        // if(num==1) return false;
        if(num == 2||num == 3) 
            return true;
        if(num%2==0) return false;
        for(int i=3;i*i<=num;i+=2){
            if(num%i==0){
                return false;
            }
        }
        return true;
    }
    public int largestPrime(int n) {
        if(n==2||n==3) return 2;
        int s=0,r=0;
        for(int i=2;i<n;i++)
            {
                if(isPrime(i))
                {
                    // System.out.println(i);
                    s+=i;
                    if(s<=n)
                    {
                        if(isPrime(s)){
                            r=s;
                        }
                    }
                    else{
                        break;
                    }
                }
            }
        return r;
    }
}