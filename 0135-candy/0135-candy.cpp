class Solution {
public:
    int candy(vector<int>& ratings) {
       int n=ratings.size();
       if(n==1) return 1;
       priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> p;
       for(int i=0;i<n;i++)
       {
         p.push({ratings[i],i});
       }
       vector<int> v(n,0);
       for(int i=0;i<n;i++)
       {
          auto t=p.top();
          if(t.second==0&&v[t.second+1]==0)
          {
            v[t.second]=1;
          }
          else if(t.second==0&&v[t.second+1]!=0)
          {
            v[t.second]=v[t.second+1]+1;
          }
          else if(t.second==n-1 && v[t.second-1]==0)
          {
            v[t.second]=1;
          }
          else if(t.second==n-1&&v[t.second-1]!=0)
          {
            if(ratings[t.second-1]==ratings[t.second])
            {
                v[t.second]=1;
            }
            else{
                v[t.second]=v[t.second-1]+1;
            }
          }
          else{
            if(v[t.second-1]==0&&v[t.second+1]==0)
            {
                v[t.second]=1;
            }
            else if(v[t.second-1]!=0&&v[t.second+1]==0)
            {
                if(ratings[t.second-1]==ratings[t.second])
                {
                    v[t.second]=1;
                }
                else{
                    v[t.second]=v[t.second-1]+1;
                }
            }
            else if(v[t.second-1]==0&&v[t.second+1]!=0)
            {
                    v[t.second]=v[t.second+1]+1;
                
            }
            else{
                int maxi=max(v[t.second+1],v[t.second-1]);
                if(ratings[t.second-1]==ratings[t.second])
                {
                    v[t.second]=v[t.second+1]+1;
                }
                else{
                    v[t.second]=maxi+1;
                }
            }
          }
          p.pop();
       }
       int mincandies=0;
       for(int i=0;i<n;i++)
       {
         mincandies+=v[i];
       }
       return mincandies;
    }
};