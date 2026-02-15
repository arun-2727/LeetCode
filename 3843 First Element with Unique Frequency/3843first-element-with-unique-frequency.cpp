class Solution {
public:
    int firstUniqueFreq(vector<int>& nums) {
        unordered_map<int,int>mapp;
        for(int x: nums)
            {
                mapp[x]++;
                
            }
        unordered_map<int,int>hash;
        for(auto& p:mapp)
            {
                hash[p.second]++;
            }
        for(int x:nums)
            {
                if(hash[mapp[x]]==1)return x;
            }
        return -1;
    }
};