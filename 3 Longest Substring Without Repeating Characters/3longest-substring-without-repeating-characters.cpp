class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> mapp;
        int left=0;
        int maxlen=0;
        for(int i=0;i<s.size();i++)
        {   
            while(mapp.count(s[i]))
            {
                mapp.erase(s[left]);
                left++;
            }
            mapp.insert(s[i]);
            maxlen=max(i-left+1,maxlen);
        }
        return maxlen;
    }
};