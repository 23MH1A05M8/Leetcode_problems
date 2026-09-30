class Solution {
public:
    bool canTransform(vector<int>& source, vector<int>& target) {
        long long sourceSum=0,targetSum=0;
        for(int i=0;i<source.size();i++)
        {
            sourceSum+=source[i];
        }
        for(int i=0;i<target.size();i++)
        {
            targetSum+=target[i];
        }
        return sourceSum==targetSum;
    }
};