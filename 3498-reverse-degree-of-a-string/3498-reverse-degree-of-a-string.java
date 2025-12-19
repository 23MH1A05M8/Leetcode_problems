class Solution {
    public int reverseDegree(String s) {
        int su=0;
      for(int i=0;i<s.length();i++)
      {
            int r='z'-s.charAt(i)+1;
            int res=r*(i+1);
            su+=res;
      }
      return su;
    }
}