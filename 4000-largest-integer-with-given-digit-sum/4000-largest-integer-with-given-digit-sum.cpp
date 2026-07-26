class Solution {
public:
    int largestInteger(int n, int s) {
       string res="";
        if(s==0) return 0;
        if(s>9*n) return -1;
        while(n!=0)
            {
                if(s>=9)
                {
                    res+='9';
                    s-=9;
                }
                else{
                    res+=char(s+'0');
                    s=0;
                }
                n--;
            }
        return stoi(res);
    }
};