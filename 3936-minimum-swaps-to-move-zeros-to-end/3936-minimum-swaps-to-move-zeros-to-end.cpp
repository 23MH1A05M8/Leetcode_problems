class Solution {
public:
    int minimumSwaps(vector<int>& nums) {
        int n=nums.size();
        int i=0,j=n-1;
        int swaps=0;
        while(i<=j)
        {
            if(nums[i]!=0) i++;
            else if(nums[j]==0) j--;
            else{
                swaps++;
                swap(nums[i],nums[j]);
                i++;
                j--;
            }
        }
        return swaps;
    }
};