class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int mini=26;
        for(int i=0;i<letters.size();i++)
        {
            if(letters[i]>target)
            {
                mini=min(mini,letters[i]-'a');
            }
        }
        if(mini==26)
        {
            return letters[0];
        }
        else return (mini+'a');
    }
};