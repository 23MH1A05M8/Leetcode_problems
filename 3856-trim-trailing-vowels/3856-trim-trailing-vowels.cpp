class Solution {
public:
    bool isVowel(char c){
        return c=='a'||c=='e'||c=='i'||c=='o'||c=='u';
    }
    string trimTrailingVowels(string s) {
        int n=s.size();
        while(!s.empty()&&isVowel(s.back()))
            {
                s.pop_back();
            }
        return s; 
    }
};