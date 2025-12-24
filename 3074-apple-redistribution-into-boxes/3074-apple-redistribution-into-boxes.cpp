class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int s=0;
        for(int i=0;i<apple.size();i++)
        {
            s+=apple[i];
        }
        sort(capacity.begin(),capacity.end());
        int c=0;
        for(int i=capacity.size()-1;i>=0;i--)
        {
            if(s>0)
            {
                s-=capacity[i];
                c++;
            }
        }
        return c;
    }
};