class Solution {
    public int lengthOfLastWord(String s) {
        String[] word=s.trim().split(" ");
        int res=word[word.length-1].length();
        return res;
    }
}