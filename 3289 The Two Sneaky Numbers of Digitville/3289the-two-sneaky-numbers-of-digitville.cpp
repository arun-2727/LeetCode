class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        map<int,int> mapp;
        for(int i:nums)
        {
            mapp[i]++;
        }
        vector<int> res;
        for(auto& [key,val]:mapp)
        {
            if(val>=2)res.push_back(key);
        }
        return res;
    }
};