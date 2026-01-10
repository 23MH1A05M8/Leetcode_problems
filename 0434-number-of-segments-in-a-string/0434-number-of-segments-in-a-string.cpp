class Solution {
public:
    int countSegments(string s) {
        stringstream word(s);
        int c=0;
        while(word>>s)
        {
            c++;
        }
        return c;
    }
};