class Solution {
public:
    bool validDigit(int n, int x) {
        string s=to_string(n);
        string v=to_string(x);
        if(s[0]!=v[0]&&s.contains(v))
        {
            return true;
        }
        return false;
    }
};