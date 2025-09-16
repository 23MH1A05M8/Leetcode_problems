class Solution {
    public void reverseString(char[] s) {
        // String str="";
        // for(int i=0;i<s.length/2;i++)
        // {
        //     for(int j=(s.length-1/)2;j>=0;j++)
        //     {
        //         s[i]=s[j];
        //     }
        // }
        // return str;
        int start=0,end=s.length-1;
        while(start<end)
        {
            char temp=s[start];
            s[start]=s[end];
            s[end]=temp;
            start++;
            end--;
        }
    }
}