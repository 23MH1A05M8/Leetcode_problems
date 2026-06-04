class Solution {
public:
    int totalWaviness(int num1, int num2) {
        if(num1<100&&num2<100) return 0;
        int c=0;
        for(int i=num1;i<=num2;i++)
        {
            if(i<100)
            {
                continue;
            }
            else{
                string s=to_string(i);
                for(int j=1;j<s.size()-1;j++)
                {
                    if(s[j]>s[j-1]&&s[j]>s[j+1])
                    {
                        c++;
                    }
                    if(s[j]<s[j-1]&&s[j]<s[j+1])
                    {
                        c++;
                    }
                }
            }
        }
        return c;
    }
};