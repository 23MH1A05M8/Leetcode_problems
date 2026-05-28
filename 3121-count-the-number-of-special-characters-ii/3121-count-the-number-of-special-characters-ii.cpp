class Solution {
public:
    int numberOfSpecialChars(string word) {
        int n=word.size();
        map<int,int> m;
        set<int> s;
        for(int i=n-1;i>=0;i--)
        {
            if((int)word[i]>=97)
            {
                if(!s.contains(word[i]))
                {
                    m[word[i]]=i;
                }
                s.insert(word[i]);
            }
        }
        set<int> s1;
        int c=0;
        for(int i=0;i<n;i++)
        {
            if((int)word[i]<97&&!s1.contains(word[i]))
            {
                for(auto mp:m)
                {
                    if(word[i]==toupper(mp.first)&&mp.second<i)
                    {
                        c++;
                        break;
                    }
                }
                s1.insert(word[i]);
            }
        }
        return c;
    }
};