class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        vector<vector<int>>res;
        map<int,vector<int>>mapp;
        for(int i=0;i<groupSizes.size();i++)
        {   
            int j=groupSizes[i];
            mapp[j].push_back(i);
            if(mapp[j].size()==j)
            {
                res.push_back(mapp[j]);
                mapp[j]={};
            }
        }
        return res;
        
    }
};