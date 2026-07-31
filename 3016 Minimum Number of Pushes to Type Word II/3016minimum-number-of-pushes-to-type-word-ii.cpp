class Solution {
public:
    int minimumPushes(string word) {
        vector<int>freq(26,0);
        for(int i=0;i<word.size();i++)
        {
            freq[word[i]-'a']++;
        }
        sort(freq.begin(),freq.end());
        int c=0;
        for(int i=25;i>=0 && freq[i]>0;i--)
        {
            c+=freq[i]*((25-i)/8+1);
        }
        return c;
    }
};