class Solution {
public:
    int maxDepth(string s) {
        stack<char> st;
        int maxi=0;
        int n=s.size();
        // bool f=false;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(')
            {
                st.push('(');
            }
            else if(s[i]==')'&&!s.empty()){
                maxi=max(maxi,(int)st.size());
                st.pop();
            }
        }
        return maxi;
    }
};