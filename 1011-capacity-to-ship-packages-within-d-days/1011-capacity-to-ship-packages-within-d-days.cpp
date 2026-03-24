class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int maxi= *max_element(weights.begin(),weights.end());
        int low=maxi;
        int high=1e9;
        int mini=INT_MAX;
        while(low<=high)
        {
            int mid=(low+high)/2;
            int c=1,s=0;
            for(int i=0;i<weights.size();i++)
            {
                if((s+weights[i])<=mid)
                {
                    s+=weights[i];
                }
                else{
                    c++;
                    s=weights[i];
                }
            }
           
            if(c>days)
            {
               low=mid+1;
            }
            else {
               high=mid-1;
            }
        }
        return low;
    }
};