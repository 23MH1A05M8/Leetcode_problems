class Solution {
public:
    string reverseWords(string s) {
        int n=s.size();
        string str="";
        string res="";
        for(int i=0;i<n;i++)
        {
            if(!isspace(s[i]))
            {
                str+=s[i];
            }
            else{
               reverse(str.begin(),str.end());
               res+=str+" ";
               str="";
            }
        }
        reverse(str.begin(),str.end());
        res+=str;
        return res;
    }
};