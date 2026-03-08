class Solution {
public:
    int minOperations(string s) {
        int n=s.size();
        if(n==1) return 0;
        if(n==2){
            if(s[0]<=s[1]) return 0;
            else return -1;
        }
        string t=s;
        sort(t.begin(),t.end());
        int res=0;
        for(int i=0;i<n;i++)
            {
                if(s[i]==t[i]){
                    res++;
                }
            }
        if(res==n) return 0;
        int ans=INT_MAX;
        string s1=s;
        sort(s.begin()+1,s.end());
        if(s[0]<=s[1]) ans=min(ans,1);
        s=s1;
        sort(s.begin(),s.end()-1);
        if(s[n-2]<=s[n-1]) ans=min(ans,1);
        s=s1;
        sort(s.begin(),s.end()-1);
        sort(s.begin()+1,s.end());
        if(s[0]<=s[1]) ans=min(ans,2);
        else ans=min(ans,3);
        s=s1;
        sort(s.begin()+1,s.end());
        sort(s.begin(),s.end()-1);
        if(s[n-2]<=s[n-1]) ans=min(ans,2);
        else ans=min(ans,3);
        return ans;
    }
};