class Solution {
public:
    int minAddToMakeValid(string s) {
        // stack<char> st;
        int open=0;
        int close=0,res=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(') open++;
            else{
                if(open>0) open--;
                else res++;
            }
        }
        return abs(open-close)+res;
    }
};