class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        int n=stones.size();
        if(n==1) return stones[0];
        if(n==2&&stones[0]==stones[1]) return 0;
        priority_queue<int> pq;
        for(int i=0;i<n;i++)
        {
            pq.push(stones[i]);
        }
        for(int i=0;i<n;i++)
        {
            if(pq.top()!=0){
                int x=pq.top();
                pq.pop();
                int y=pq.top();
                pq.pop();
                if(x==y)
                {
                    // int r=0;
                    if(pq.empty()) return 0;
                    else continue;
                }
                else{
                    pq.push(x-y);
                }
            }
            else{
                break;
            }
        }
        return pq.top();
    }
};