class Solution {
public:
    bool hasAllCodes(string s, int k) {
        unordered_set<string>ss;
        for(int i=0;i+k<=s.size();i++)
        {
            ss.insert(s.substr(i,k));
        }
        return (ss.size()==(1<<k));
    }
};