class Solution {
    void solve(int idx,string &digits,string temp,vector<string>&res,unordered_map<int,string>& mapp)
    {
        if(idx>=digits.size())
        {
            res.push_back(temp);
            return;
        }
        string s=mapp[digits[idx]-'0'];
        for(int i=0;i<s.size();i++)
        {
            temp.push_back(s[i]);
            solve(idx+1,digits,temp,res,mapp);
            temp.pop_back();
        }
        return;
    }
public:
    vector<string> letterCombinations(string digits) {
        unordered_map<int,string>mapp={
            {2,"abc"},
           { 3,"def"},
            {4,"ghi"},
           { 5,"jkl"},
            {6,"mno"},
           { 7,"pqrs"},
            {8,"tuv"},
           { 9,"wxyz"}
        };
        vector<string>res;
        if(digits.empty())return res;
        solve(0,digits,"",res,mapp);
        return res;
    }
};