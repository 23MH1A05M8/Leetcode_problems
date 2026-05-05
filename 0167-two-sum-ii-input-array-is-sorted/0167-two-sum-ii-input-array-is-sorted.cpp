class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        // vector<int> v(numbers.begin(),numbers.end());
        vector<int> v;
        int n=numbers.size();
        int i=0;
        int j=n-1;
        // int s=0;
        while(i<j)
        {
            int s=numbers[i]+numbers[j];
            if(s==target)
            {
                v.push_back(i+1);
                v.push_back(j+1);
            }
            if(s>target)
            {
                j--;
            }
            else{
                i++;
            }
        }
        return v;
    }
};