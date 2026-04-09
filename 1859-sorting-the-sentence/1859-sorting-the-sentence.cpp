class Solution {
public:
    string sortSentence(string s) {
        int n=s.size();
        string str="";
        map<int,string> m;
        for(int i=0;i<n;i++)
        {
            if(isalpha(s[i]))
            {
                str+=s[i];
            }
            else if(isdigit(s[i])){

                int ind=s[i]-'0';
                m[ind]=str;
                str="";
            }
        }
        string res="";
        for(auto mp:m)
        {
            res+=mp.second+" ";
        }
        res.pop_back();
        return res;
    }
};