class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        long long n=piles.size();
        long long low=1,high=*max_element(piles.begin(),piles.end());
        long long res=LLONG_MAX;
        while(low<=high)
        {
            long long mid=(low+high)/2;
            long long hours=0;
            for(int i=0;i<n;i++)
            {
                if(piles[i]%mid==0&&mid<=piles[i])
                {
                    hours+=(piles[i]/mid);
                }
                else{
                    hours+=(piles[i]/mid)+1;
                }
            }
            if(hours<=h)
            {
                res=min(res,mid);
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return (int)res;
    }
};