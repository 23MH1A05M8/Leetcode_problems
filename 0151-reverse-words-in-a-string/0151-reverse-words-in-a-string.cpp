class Solution {
public:
    string reverseWords(string s) {
        int n=s.size();
        int start,end;
        int i=0,j=n-1;
        while(i<n)
        {
            if(s[i]!=' ')
            {
                start=i;
                break;
            }
            i++;
        }
        while(j>=0)
        {
            if(s[j]!=' ')
            {
                end=j;
                break;
            }
            j--;
        }
        cout<<start<<" "<<end<<endl;
        string res;
        string r;
        for(int k=end;k>=start;k--)
        {
            
            if(s[k]!=' ')
            {
                r+=s[k];
            }
            if((s[k]==' '||k==start)&&r.size()!=0){
                reverse(r.begin(),r.end());
                res+=r;
                if(k!=start)
                {
                    res+=" ";
                }
                r="";
            }
        }

        return res;
    }
};