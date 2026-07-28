class Solution {
public:
    string smallestPalindrome(string s) {
        int n=s.size();
        map<char,int> m;
        for(int i=0;i<n;i++)
        {
            m[s[i]]++;
        }
        string first="",mid="";
        for(auto mp:m)
        {
            first+=string(mp.second/2,mp.first);
            if(mp.second%2==1)
            {
                mid+=mp.first;
            }
        }
        string second=first;
        reverse(second.begin(),second.end());
        return first+mid+second;
    }
};