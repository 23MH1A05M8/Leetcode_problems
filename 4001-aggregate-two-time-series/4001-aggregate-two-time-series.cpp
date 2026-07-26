class Solution {
public:
    vector<vector<int>> aggregateTimeSeries(vector<vector<int>>& series1, vector<vector<int>>& series2) {
        int n=series1.size(),m=series2.size();
        vector<vector<int>> res;
        int i=0,j=0;
        while(i<n||j<m)
            {
                if(i<n&&j<m&&series1[i][0]==series2[j][0])
                {
                    long long r=series1[i][1]+series2[j][1];
                    res.push_back({series1[i][0],(int)r});
                    i++;
                    j++;
                }
                else{
                    if(i<n&&j<m&&series1[i][0]<series2[j][0])
                    {
                        long long r=series1[i][1];
                        if(j<m) r+=series2[j][1];
                        res.push_back({series1[i][0],(int)r});
                        i++;
                    }
                    else if(i<n&&j<m&&series1[i][0]>series2[j][0]){
                        long long r=series2[j][1];
                        if(i<n) r+=series1[i][1];
                        res.push_back({series2[j][0],(int)r});
                        j++;
                    }
                    else if(i<n)
                    {
                        res.push_back({series1[i][0],series1[i][1]});
                        i++;
                    }
                    else {
                        res.push_back({series2[j][0],series2[j][1]});
                        j++;
                    }
                }
            }
        return res;
    }
};