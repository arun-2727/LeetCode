class Solution {
public:
    vector<int> minDistinctFreqPair(vector<int>& nums) {
        unordered_map<int,int> mapp;
        
        for(int x : nums)mapp[x]++;
        
        vector<int> val;
        for(auto &p : mapp)val.push_back(p.first);
        sort(val.begin(), val.end());
        
        int n = val.size();
        
        for(int i = 0; i < n; i++) {
            for(int j = i + 1; j < n; j++) {
                if(mapp[val[i]] != mapp[val[j]]) {
                    return {val[i], val[j]};
                }
            }
        }
        
        return {-1, -1};
    }
};
