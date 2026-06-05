class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        int n=nums.size();
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        for(int i=0;i<n;i++)
        {
            pq.push({nums[i],i});
        }
        while(k>0)
        {
            pair<int,int> top_ele=pq.top();
            pq.pop();
            top_ele.first*=multiplier;
            pq.push(top_ele);
            k--;
        }
        for(int i=0;i<n;i++)
        {
            pair<int,int> top_ele=pq.top();
            pq.pop();
            nums[top_ele.second]=top_ele.first;
        }
        return nums;
    }
};