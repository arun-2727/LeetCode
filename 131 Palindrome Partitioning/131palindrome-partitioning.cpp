class Solution {
    void solve(int idx,vector<vector<string>>&res, vector<string>&temp,string s)
    {   
        if(idx==s.size())
        {
            res.push_back(temp);
            return;
        }
        for(int i=idx;i<s.size();i++)
        {
            if(valid(s,idx,i))
            {
                temp.push_back(s.substr(idx,i-idx+1));
                solve(i+1,res,temp,s);
                temp.pop_back();
            }
        }
        return;
    }
    bool valid(string s,int start,int end)
    {
        while(start<=end)
        {
            if(s[start++]!=s[end--])return false;
        }
        return true;
    }
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>>res;
        vector<string>temp;
        solve(0,res,temp,s);
        return res;
    }
};