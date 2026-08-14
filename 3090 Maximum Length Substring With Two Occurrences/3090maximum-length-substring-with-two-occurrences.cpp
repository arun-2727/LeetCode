class Solution {
public:
    int maximumLengthSubstring(string s) {
        unordered_map<char,int>mapp;
        int maxi=INT_MIN;
        int l=0;
        for(int i=0;i<s.size();i++)
        {
            mapp[s[i]]++;
            if(mapp[s[i]]>2)
            {
                while(mapp[s[i]]>2)
                {
                    mapp[s[l]]--;
                    l++;
                }
            }
            
            maxi=max(maxi,i-l+1);
        }
        return maxi;
    }
};