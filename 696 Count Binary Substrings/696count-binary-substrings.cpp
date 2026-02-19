class Solution {
public:
    int countBinarySubstrings(string s) {
        vector<int>groups;
        if(s.size()==1)return 0;
        int i=0;
        int cnt=1;
        while(i<s.size()-1)
        {
            if(s[i]==s[i+1])
            {
                cnt++;
                i++;
            }
            else
            {
                groups.push_back(cnt);
                cnt=1;
                i++;
            }
        }
        groups.push_back(cnt);
        int res=0;
        for(int i=0;i<groups.size()-1;i++)
        {
            res+=min(groups[i],groups[i+1]);
        }
        return res;
    }
};