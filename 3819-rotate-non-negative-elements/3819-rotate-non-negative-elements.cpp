class Solution {
public:
    vector<int> rotateElements(vector<int>& nums, int k) {
        vector<int> v;
        for(int i=0;i<nums.size();i++)
            {
                if(nums[i]>=0)
                {
                    v.push_back(nums[i]);
                }
            }
        int m=v.size();
        if(m>0){
            k=k%m;
            if(k==0) return nums;
        reverse(v.begin(),v.begin()+k);
        reverse(v.begin()+k,v.end());
        reverse(v.begin(),v.end());
        }
        // vector<int> res;
        int ind=0;
        for(int i=0;i<nums.size();i++)
            {
                if(nums[i]<0)
                {
                    continue;
                }
                else{
                    nums[i]=v[ind];
                    ind++;
                }
            }
        return nums;
    }
};