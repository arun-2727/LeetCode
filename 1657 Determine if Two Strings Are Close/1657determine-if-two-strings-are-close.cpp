class Solution {
public:
    bool closeStrings(string word1, string word2) {
        unordered_map<char,int> mapp,hash;
        if(word1.size()!=word2.size())return false;
        for(char c:word1)
        {
            mapp[c]++;
        }
        for(char c:word2)
        {
            hash[c]++;

        }
        
        unordered_set<char> s1,s2;
        for(auto& p : mapp)s1.insert(p.first);
        for(auto& p : hash)s2.insert(p.first);
        if(s1!=s2)return false;
        vector<int> v1,v2;
        for(auto& p:mapp)v1.push_back(p.second);
        for(auto& p:hash)v2.push_back(p.second);
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        return v1==v2;
    }
};