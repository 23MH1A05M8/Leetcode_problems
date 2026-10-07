class Solution {
public:
    int minRotations(int n, string s) {
        int ans=0;
        int diff=abs(s[0]-'0');
        ans+=min(diff,10-diff);
        for(int i=1;i<n;i++)
        {
            diff=abs(s[i]-s[i-1]);
            ans+=min(diff,10-diff);
        }
        int res=ans;
        diff=abs(s[n-1]-'0');
        int newCost=ans;
        int first=abs(s[0]-'0');
        first=min(first,10-first);
        newCost-=first;
        newCost+=min(diff,10-diff);
        res=min(res,newCost);
        for(int k=1;k<n;k++)
        {
            int oldCost=abs(s[k]-s[k-1]);
            oldCost=min(oldCost,10-oldCost);
            int newc=abs(s[n-1]-s[k-1]);
            newc=min(newc,10-newc);
            newCost=ans-oldCost+newc;
            res=min(res,newCost);
        }
        return res;
    }
};