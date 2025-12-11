class Solution {
public:
    int maxDistinct(string s) {
         set<char> st;
        char arr[s.size()+1];
        copy(s.begin(),s.end(),arr);
        arr[s.size()]='\0';
        for(int i=0;i<s.size();i++)
        {
            st.insert(arr[i]);
        }
        return st.size();
    }
};