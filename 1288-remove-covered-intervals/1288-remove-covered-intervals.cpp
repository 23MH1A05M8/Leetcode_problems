class Solution {
public:
    static bool cmp(vector<int> &a,vector<int> &b)
    {
        if(a[0]==b[0]) return a[1]>b[1];
        return a[0]<b[0];
    }
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
      int n=intervals.size();
      sort(intervals.begin(),intervals.end(),cmp);
      int st=intervals[0][0];
      int end=intervals[0][1];
      vector<pair<int,int>> res;
      res.push_back({st,end});
      for(int i=1;i<n;i++)
      {
        if((intervals[i][0]>=st&&intervals[i][1]<=end))
        {
            end=max(end,intervals[i][1]);
            // continue;
        }
        else{
            res.push_back({st,end});
            st=intervals[i][0];
            end=intervals[i][1];
        }
      }  
      return res.size();
    }
};