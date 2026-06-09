class Solution {
public:
    int answer(int n,int k)
    {
        if(n==1) return 0;
        return (answer(n-1,k)+k)%n;
    }
    int findTheWinner(int n, int k) {
        if(n==1) return n;
        // int ans=0;
        // for(int i=2;i<=n;i++)
        // {
        //     ans=(ans+k)%i;
        // }
        // return ans+1;
        return answer(n,k)+1;
    }
};