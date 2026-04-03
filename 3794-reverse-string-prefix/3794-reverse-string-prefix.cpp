class Solution {
public:
    string reversePrefix(string s, int k) {
        string r="";
        for(int i=0;i<k;i++)
        {
            r+=s[i];
        }
        reverse(r.begin(),r.end());
        for(int i=k;i<s.size();i++)
        {
            r+=s[i];
        }
        return r;
    }
};