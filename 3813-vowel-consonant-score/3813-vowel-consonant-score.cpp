class Solution {
public:
    int vowelConsonantScore(string s) {
        int n=s.size();
        int v=0,c=0;
        for(char ch:s)
        {
            if(ch>='a'&&ch<='z'){
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
            {
                v++;
            }
            else
            {
                c++;
            }
            }
        }
        int r;
        if(c>0)
        {
            r=floor(v/c);
        }
        else{
            return 0;
        }
        return r;
    }
};