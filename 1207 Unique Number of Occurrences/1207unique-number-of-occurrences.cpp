class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> mapp;
        int count=0;
        for(int i:arr)
        {
            mapp[i]++;
        }
       unordered_set<int> s;
       for(auto& p:mapp)
       {
        if(s.count(p.second))
        {
            return false;
        }
        s.insert(p.second);
       }
       return true;
    }
};