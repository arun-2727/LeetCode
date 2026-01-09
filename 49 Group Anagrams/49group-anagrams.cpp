class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        if(strs.empty())return {{""}};
        unordered_map<string,vector<string>>mapp;
        for(string& s:strs)
        {
            string temp=s;
            sort(temp.begin(),temp.end());
            mapp[temp].push_back(s);
        }
        vector<vector<string>> res;
        for(auto& s:mapp)
        {
            res.push_back(s.second);
        }
        return res;
    }
};