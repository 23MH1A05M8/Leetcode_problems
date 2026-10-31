class Solution {
public:
    long long maximizeSum(vector<int>& nums, int k) {
        vector<long long> gain;
        long long sum = 0;

        for (int num : nums) {
            sum += num;

            string s = to_string(num);
            sort(s.rbegin(), s.rend());

            long long mx = stoll(s);
            gain.push_back(mx - num);
        }

        sort(gain.rbegin(), gain.rend());

        for (int i = 0; i < k; i++) {
            sum += gain[i];
        }

        return sum; 
    }
};