class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        set<char> s;
        string str;
        int ind=0;
        while(ind<strs[0].size()){
            int co=0;
            for(int i=0;i<strs.size();i++)
            {
                string c=strs[i];
                s.insert(c[ind]);
                cout<<c[ind]<<" ";
                if(s.size()==1)
                {
                    co++;
                }
                if(co==strs.size())
                {
                    str+=c[ind];
                }
            }
            if(s.size()!=1)
            {
                break;
            }
            ind++;
            s.clear();
        }
        return str;
    }
};