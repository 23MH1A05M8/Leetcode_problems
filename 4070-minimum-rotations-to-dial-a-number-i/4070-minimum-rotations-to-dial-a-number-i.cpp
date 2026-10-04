class Solution {
public:
    int minRotations(string s) {
        int n=s.size();
        int curr=0,ans=0;
        for(int i=0;i<n;i++)
        {
            int num=s[i]-'0';
            int diff=abs(num-curr);
            ans+=min(diff,10-diff);
            curr=num;
        }
        return ans;
    }
};