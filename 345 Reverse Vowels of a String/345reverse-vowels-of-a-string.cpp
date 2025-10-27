class Solution {
public:
bool isvowel(char c)
{
    c=tolower(c);
    if(c=='a' || c=='e' || c=='i'||c=='o'||c=='u')
    {
        return true;
    }
    else return false;
}
    string reverseVowels(string s) {
        string vowel="";
        for(char c:s)
        {
            if(isvowel(c))
            {
                vowel+=c;
            }
        }
        reverse(vowel.begin(),vowel.end());
        for(int i=0,j=0;i<s.size();i++)
        {
            if(isvowel(s[i]))
            {
                s[i]=vowel[j];
                j++;
            }
        }
        return s;
    }
};