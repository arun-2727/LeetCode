class Solution {
public:
    int prefixConnected(vector<string>& words, int k) {
        int cnt=0;
        unordered_map<string,int>mapp;
        for(string s:words)
            {if(s.size()>=k)
            {
                string ss=s.substr(0,k);
                mapp[ss]++;
            }
                
            }
        for(auto &it: mapp)
            {
                if(it.second>=2)
                {
                    cnt++;
                }
            }
        return cnt;
    }
};