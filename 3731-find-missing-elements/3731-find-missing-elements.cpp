class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n=nums.size();
        // int mini=*min_elemeny(nums.begi)
        sort(nums.begin(),nums.end());
        int i=nums[0];
        vector<int> res;
        int ind=0;
        while(i<nums[n-1])
        {
            if(i==nums[ind])
            {
                i++;
                ind++;
            }
            else{
                res.push_back(i);
                i++;
            }
        }
        return res;
    }
};