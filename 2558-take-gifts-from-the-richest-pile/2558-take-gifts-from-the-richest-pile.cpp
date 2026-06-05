class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        int n=gifts.size();
        priority_queue<long long> pq;
        for(int i=0;i<n;i++)
        {
            pq.push(gifts[i]);
        }
        for(int i=0;i<k;i++)
        {
            int top_ele=pq.top();
            pq.pop();
            top_ele=floor(sqrt(top_ele));
            pq.push(top_ele);
        }
        long long s=0;
        for(int i=0;i<n;i++)
        {
            int top_ele=pq.top();
            s+=top_ele;
            pq.pop();
        }
        return s;
    }
};