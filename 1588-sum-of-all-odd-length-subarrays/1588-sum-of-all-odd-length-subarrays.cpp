class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int s=0;
        int n=arr.size();
       for(int i=0;i<n;i++){
            int r=(i+1)*(n-i);
            int res=ceil(r/2.0);
            cout<<res<<endl;
            s += (arr[i]*res);
       }
       return s;
    }
};