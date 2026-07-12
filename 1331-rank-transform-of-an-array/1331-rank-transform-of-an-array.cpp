class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
       priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
       vector<int> res(arr.size());
       if(arr.size()==0) return res;
       for(int i=0;i<arr.size();i++)
       {
            pq.push({arr[i],i});
       }
       int prev=pq.top().first;
       res[pq.top().second]=1;
       int rank=1;
       pq.pop();
       for(int i=1;i<arr.size();i++)
       {
            auto top_ele=pq.top();
            pq.pop();
            if(prev==top_ele.first)
            {
                res[top_ele.second]=rank;
            }
            else{
                rank=rank+1;
                prev=top_ele.first;
                res[top_ele.second]=rank;
            }
       }
        return res;
    }
};