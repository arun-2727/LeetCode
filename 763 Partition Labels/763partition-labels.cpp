class Solution {
public:
    vector<int> partitionLabels(string s) {
        unordered_map<char,int>mapp;
        for(int i=0;i<s.size();i++)
        {
            mapp[s[i]]=i;
        }
        vector<int>res;
        int maxx=0;
        int prev=-1;
        for(int i=0;i<s.size();i++)
        {
            maxx=max(maxx,mapp[s[i]]);
            if(i==maxx)
            {
                res.push_back(maxx-prev);
                prev=maxx;
            }
        }
        return res;
    }
};