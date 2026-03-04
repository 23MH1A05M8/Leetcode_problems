class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n=arr.size();
        int l=0,h=n-1;
        while(l+1<h)
        {
            int mid=(l+h)/2;
            if(arr[mid]<arr[mid+1])
            {
                l=mid;
            }
            else{
                h=mid;
            }
        }
        return h;
    }
};