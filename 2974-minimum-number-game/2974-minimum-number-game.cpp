class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        priority_queue<int,vector<int>,greater<int>> pq;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            pq.push(nums[i]);
        }
        int ind=0;
        for(int i=0;i<n/2;i++)
        {
            int first_ele=pq.top();
            pq.pop();
            int sec_ele=pq.top();
            pq.pop();
            nums[ind++]=sec_ele;
            nums[ind++]=first_ele;
        }
        return nums;
    }
};