class Solution {
public:
    int countIntersectingIntervals(vector<vector<int>>& intervals) {
        int n=intervals.size();
        int c=0;
        for(int i=0;i<n;i++)
        {
            int s=intervals[i][0];
            int e=intervals[i][1];
            // if(start)
            for(int j=i+1;j<n;j++)
            {
                int start=intervals[j][0];
                int end=intervals[j][1];
                if(s<=end&&start<=e) c++;
            }
        }
        return c;
    }
    
};