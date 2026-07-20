class Solution {
public:
    vector<bool> transformStr(string s, vector<string>& strs) {
        vector<bool> res;
        vector<int> szpos;
        int o=0,z=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='0'){
                z++;
                szpos.push_back(i);
            }
            else o++;
        }
        // cout<<z<<" "<<o<<endl;
        for(int i=0;i<strs.size();i++)
        {
            string r=strs[i];
            vector<int> tzpos;
            int ones=0,zeroes=0;
            for(int j=0;j<r.size();j++)
            {
                if(r[j]=='0'){
                    zeroes++;
                    // tzpos.push_back(j);
                } 
                else if(r[j]=='1') ones++;
            }
            if(z<zeroes||o<ones){
                // cout<<ones<<" "<<zeroes<<" "<<r<<endl;
                 res.push_back(false);
            }
            else{
                int cmp=z;
                for(int j=0;j<r.size();j++)
                {
                    if(r[j]=='0')
                    {
                        tzpos.push_back(j);
                        cmp--;
                    }
                    if(r[j]=='?')
                    {
                        // if(ones<z){
                            if(cmp>0&&zeroes<z)
                            {
                                r[j]='0';
                                tzpos.push_back(j);
                                cmp--;
                                zeroes++;
                            }
                            // else{
                            //     r[j]='1';
                            // }
                        // }
                        else{
                            r[j]='1';
                        }
                    }
                }
                // cout<<r<<endl;
                if(tzpos.size()!=szpos.size()){
                    res.push_back(false);
                }
                else{
                    bool ans=true;
                    for(int i=0;i<szpos.size();i++)
                    {
                        if(tzpos.size()!=0&&szpos.size()!=0&&tzpos[i]>szpos[i])
                        {
                            ans=false;
                        }
                    }
                    res.push_back(ans);
                }
                // res.push_back(ans);
            }
        }
        return res;
    }
};