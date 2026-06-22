class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int b=0,a=0,o=0,l=0,n=0;
        for(int i=0;i<text.size();i++)
        {
            if(text[i]=='a')
            {
                a++;

            }
            if(text[i]=='b') b++;
            if(text[i]=='l') l++;
            if(text[i]=='o') o++;
            if(text[i]=='n') n++;
        }
        cout<<b<<" "<<a<<" "<<l<<" "<<o<<" "<<n; 
        int mini=min(b,min(a,n));
        if(l>=2*mini&&o>=2*mini)
        {
            return mini;
        }
        if(l>=2*mini&&o<2*mini)
        {
            return o/2;
        }
        if(l<2*mini&&o>=2*mini){
            return l/2;
        }
        return (min(l,o))/2;
    }
};