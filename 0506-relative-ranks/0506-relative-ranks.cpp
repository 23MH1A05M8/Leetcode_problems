class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        priority_queue<pair<int,int>> pq;
        int n=score.size();
        for(int i=0;i<n;i++)
        {
            pq.push({score[i],i});
        }
        int c=1;
        vector<string> v(n);
        for(int i=0;i<n;i++)
        {
            pair<int,int> top_ele=pq.top();
            pq.pop();
            if(c==1)
            {
                v[top_ele.second]="Gold Medal";
            }
            else if(c==2)
            {
                v[top_ele.second]="Silver Medal";
            }
            else if(c==3)
            {
                v[top_ele.second]="Bronze Medal";
            }
            else{
                v[top_ele.second]=to_string(c);
            }
            c++;
        }
        return v;
    }
};