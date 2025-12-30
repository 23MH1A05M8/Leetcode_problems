class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        string res;
        int i=0,j=0;
        int n=s.size();
        int m=spaces.size();
        while(i<n)
        {
            if(j<m&&spaces[j]==i)
            {
                res+=" ";
                j++;
            }
            res+=s[i];
            i++;
        }
        return res;
    }
};