class Solution {
    void solve(vector<string>&res,int idx,string temp,int n,int oc,int cc)
    {
        if(idx==2*n)
        {
            res.push_back(temp);
            return;
        }
        if(oc<n)
        {
            temp+='(';
            solve(res,idx+1,temp,n,oc+1,cc);
            temp.pop_back();
        }
        if(cc<oc)
        {
            temp+=')';
            solve(res,idx+1,temp,n,oc,cc+1);
            temp.pop_back();
        }
        return;
    }
public:
    vector<string> generateParenthesis(int n) {
        vector<string>res;
        solve(res,0,"",n,0,0);
        return res;
    }
};