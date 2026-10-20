class Solution {
    void solve(int idx,vector<string>&res,string temp,long long ans,long long prev,string& num, int target)
    {
        if(idx==num.size())
        {
            if(ans==target)
            {
                res.push_back(temp);
                return;
            }
        }
        for(int i=idx;i<num.size();i++)
        {   
            if(i>idx && num[idx]=='0')break;
            string substring=num.substr(idx,i-idx+1);
            long long curr=stoll(substring);
            if(idx==0)
            {
                solve(i+1,res,temp+substring,curr,curr,num,target);
            }
            else
            {
                solve(i+1,res,temp+'+'+substring,ans+curr,curr,num,target);
                solve(i+1,res,temp+'-'+substring,ans-curr,-curr,num,target);
                solve(i+1,res,temp+'*'+substring,ans-prev+prev*curr,prev*curr,num,target);
            }
        }
    }
public:
    vector<string> addOperators(string num, int target) {
        vector<string>res;
        string temp="";
        solve(0,res,temp,0,0,num,target);
        return res;

    }
};