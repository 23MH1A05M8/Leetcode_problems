class Solution {
public:
    string frequencySort(string s) {
        int n=s.size();
        map<char,int> m;
        priority_queue<pair<int,char>> pq;
        for(int i=0;i<n;i++)
        {
            m[s[i]]++;
            // cout<<s[i]<<" ";
        }
        for(auto mp:m)
        {
            pq.push({mp.second,mp.first});
            // cout<<mp.second<<" "<<mp.first<<endl;
            // pq.top();
        }
        string res="";
        for(int i=0;i<m.size();i++)
        {
            pair<int,char> top_char=pq.top();
            // cout<<top_char.second<<" ";
            pq.pop();
            while(top_char.first-->0){
                res+=top_char.second;
            }
        }
        return res;
    }
};