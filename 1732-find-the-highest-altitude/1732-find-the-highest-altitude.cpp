class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n=gain.size();
        int ps[n+1];
        ps[0]=0;
        int maxi=0;
        for(int i=0;i<n;i++)
        {
            ps[i+1]=ps[i]+gain[i];
            maxi=max(maxi,ps[i+1]);
        }
        return maxi;
    }
};