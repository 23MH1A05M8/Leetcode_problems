class Solution {
public:
    int elevatorRequests(int n, vector<int>& requests) {
        int s=requests.size();
        int res=abs(0-requests[0]);
        for(int i=1;i<s;i++)
            {
                res+=abs(requests[i-1]-requests[i]);
            }
        return res;
    }
};