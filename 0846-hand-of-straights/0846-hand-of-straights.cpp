class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        sort(hand.begin(),hand.end());
        int res=0;
        for(int i=0;i<hand.size();i++)
        {
            if(pq.empty())
            {
                pq.push({hand[i],1});
                cout<<pq.top().first<<" "<<pq.top().second<<endl;
            }
            else
            {
                if(!pq.empty()){
                pair<int,int> top_ele=pq.top();
                if(top_ele.second<groupSize)
                {
                    cout<< top_ele.first<<" "<<top_ele.second<<endl;
                    if(top_ele.first+1==hand[i])
                    {
                       pq.pop();

                        int newLen = top_ele.second + 1;

                        if(newLen < groupSize)
                        {
                            pq.push({hand[i], newLen});
                        }
                    }
                    else{

                        pq.push({hand[i],1});
                    }
                }
                // else
                // {
                //     pq.pop();
                // }
                }
            }
            
        }
        while(!pq.empty())
        {
            if(pq.top().second != groupSize)
                return false;

            pq.pop();
        }
        return true;
    }
};