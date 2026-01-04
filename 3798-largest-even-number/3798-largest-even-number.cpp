class Solution {
public:
    string largestEven(string s) {
        string str;
        int n=s.size();
        if((s[n - 1] - '0')%2==0)
        {
            return s;
        }
        else{
        for(int i=n-1;i>=0;i--)
        {
            if((s[i]-'0')%2!=0)
            {
                s.erase(i,1);

            }
            else if((s[i]-'0')%2==0){
                break;
            }
        }
        }
        return s;
    }
};