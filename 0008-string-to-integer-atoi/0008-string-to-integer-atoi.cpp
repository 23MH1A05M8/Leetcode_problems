class Solution {
public:
    int integer(string s,int i,long long num,int sign)
    {
        if(i>s.size()||!isdigit(s[i])) return (int)(num*sign);
        num = num*10+(s[i]-'0');
        int mini=INT_MIN;
        int maxi=INT_MAX;
        if(sign*num<=mini) return mini;
        if(sign*num>=maxi) return maxi;
        return integer(s,i+1,num,sign);
    }
    int myAtoi(string s) {
        int i=0;
        cout<<s.size()<<endl;
        while(s.size()>=i&&s[i]==' '){
            i++;
        }
        int sign=1;
        cout<<i<<endl;
        if(i<s.size() && (s[i]=='+' || s[i]=='-' ))
        {
            sign = (s[i]=='-') ? -1 : 1;
            i++;
        }
        return integer(s,i,0,sign);
    }
};