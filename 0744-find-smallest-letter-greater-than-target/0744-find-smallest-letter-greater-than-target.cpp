class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int n=letters.size();
        if(target<letters[0]||target>=letters[n-1]) return letters[0];
        int l=0,h=n-1;
        while(l+1<h)
        {
            int mid=(l+h)/2;
            if(letters[mid]>target)
            {
                h=mid;
            }
            else{
                l=mid;
            }
        }
        return letters[h];
    }
};