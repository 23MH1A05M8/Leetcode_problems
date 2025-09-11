class Solution {
    public String sortVowels(String s) {
        ArrayList<Character> list=new ArrayList<>();
        String vowels="AEIOUaeiou";
        for(char c:s.toCharArray())
        {
            if(vowels.indexOf(c)!=-1)
            {
                list.add(c);
            }
        }
        Collections.sort(list);
        StringBuilder res=new StringBuilder();
        int vi=0;
        for(char c:s.toCharArray())
        {
            if(vowels.indexOf(c)!=-1)
            {
                res.append(list.get(vi));
                vi++;
            }
            else
            {
                res.append(c);
            }
        }
        return res.toString();
    }
}