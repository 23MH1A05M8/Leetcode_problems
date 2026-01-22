class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> s(nums.begin(),nums.end());
        nums.clear();
        for(int i:s)
        {
            nums.push_back(i);
        }
        return nums.size();
    }
};