class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        map<int,int>mapp;
        vector<int>res;
        for(int x:bulbs)
            {
                mapp[x]++;
            }
        for(auto const& [key,val]: mapp)
            {
                if(val%2==1)
                {
                    res.push_back(key);
                }
            }
        sort(res.begin(),res.end());
        return res;
    }
};