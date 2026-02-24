class Solution {
public:
    bool hasAllCodes(string str, int k) {
        int n=str.size();
        set<string> s;
        string res="";
        int i=0;
        while(i<n)
        {
            res+=str[i];
            if(res.size()==k)
            {
                s.insert(res);
                res.erase(0,1);
            }
            i++;
        }
        int ans=pow(2,k);
        if(s.size()==ans){
            return true;
        }
        return false;
    }
};