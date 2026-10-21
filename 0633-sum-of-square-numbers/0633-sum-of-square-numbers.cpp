class Solution {
public:
    bool judgeSquareSum(int c) {
        long long high=sqrt(c);
        long long low=0;
        // cout<<high<<endl;
        while(low<=high)
        {
            long long s=(low*low+high*high);
            if(s==c) return true;
            if(s>(long long)c) high--;
            else low++;
            
        }
        return false;
    }
};