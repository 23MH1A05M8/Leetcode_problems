class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n=code.size();
        vector<int> v(2*n,0);
        vector<int> v1(n,0);
        if(k==0)
        {
            return v1;
        }
        else{
            for(int i=0;i<n;i++)
            {
                v[i]=code[i];
                v[i+n]=code[i];
            }
            if(k>0)
            {
                for(int i=0;i<n;i++)
                {
                    int j=0,ind=i+1,s=0;
                    while(j<k)
                    {
                        s+=v[ind++];
                        j++;
                    }
                    v1[i]=s;
                }
                return v1;
            }
            else{
                k=abs(k-0);
                // cout<<k;
                int d=0;
                for(int i=n;i<(2*n);i++)
                {
                    int j=0,ind=i-1,s=0;
                    while(j<k)
                    {
                        // cout<<v[ind]<<endl;
                        s+=v[ind--];
                        j++;
                    }
                    // cout<<endl;
                    // cout<<s<<endl;
                    v1[d++]=s;
                }
                // reverse(v1.begin(),v1.end());
                return v1;
            }
        }
        return v;
    }
};