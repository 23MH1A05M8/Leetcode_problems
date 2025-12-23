class Solution {
public:
    int countGoodSubstrings(string s) {
         set<char> s1;
        int m=0;
        if(s.size()>=3){
        for(int i=0;i<s.size()-2;i++)
        {
            int c=0;
            for(int j=i;j<3+i;j++)
            {
                if(!s1.contains(s[j]))
                {
                    s1.insert(s[j]);
                    // cout<<s[j]<<" ";
                    c++;
                }
            }
            // cout<<endl;
            s1.clear();
            if(c==3)
            {
                m++;
            }
        }
        }
        return m;
    }
};