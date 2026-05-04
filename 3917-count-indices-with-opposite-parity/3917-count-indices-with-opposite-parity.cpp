class Solution {
public:
    vector<int> countOppositeParity(vector<int>& nums) {
        int n=nums.size();
        int e=0,o=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]%2==0)
            {
                e++;
            }
            else{
                o++;
            }
        }
        vector<int> v;
        for(int i=0;i<n;i++)
        {
            if(nums[i]%2==0)
            {
                e--;
                v.push_back(o);
            }
            else{
                o--;
                v.push_back(e);
            }
        }
        return v;
    }
};