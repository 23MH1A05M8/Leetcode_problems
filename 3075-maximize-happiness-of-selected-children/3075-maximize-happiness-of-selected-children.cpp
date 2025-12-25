class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        long long s=0;
        sort(happiness.begin(),happiness.end(),greater<int>());
        s=happiness[0];
        long long c=1;
        for(int i=1;i<happiness.size();i++)
        {
            if(c<k&&(happiness[i]-i)>0)
            {
                s+=happiness[i]-i;
                c++;
            }

        }
        return s;
    }
};