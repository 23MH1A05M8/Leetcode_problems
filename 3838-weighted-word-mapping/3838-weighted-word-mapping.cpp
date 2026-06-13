class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string res="";
        for(string &word:words)
            {
                int tw=0;
                for(char ch:word)
                    {
                        tw+=weights[ch-'a'];
                    }
                int mv=tw%26;
                int newchar='z'-mv;
                res+=newchar;
            }
        return res;
    }
};