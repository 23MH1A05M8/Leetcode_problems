class Solution {
public:
    int productNum(int temp)
    {
        int addon=1;
        while(temp>0)
        {
            int r=temp%10;
            addon*=r;
            temp=temp/10;
        }
        return addon;
    }
    int smallestNumber(int n, int t) {
        while(true)
        {
            if(productNum(n)%t==0)
                return n;
            n++;
        }
    }
};