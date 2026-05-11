class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> v;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            string curr=to_string(nums[i]);
            for(char c:curr)
            {
                v.push_back(c-'0');
            }
        }
        return v;
    }
};