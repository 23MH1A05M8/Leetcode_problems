class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        map<char,int> mp;
        int i=0,j=0;
        int maxi=0;
        while(j<n)
        {
            mp[s[j]]++;
            if(mp.size()!=(j-i+1))
            {
                int ms=mp.size();
                maxi=max(maxi,ms);
                mp[s[i]]--;
                if(mp[s[i]]==0)
                {
                    mp.erase(s[i]);
                }
                i++;
            }
            else{
                int ms=mp.size();
                maxi=max(maxi,ms);
            }
            j++;
        }
        return maxi;
    }
};