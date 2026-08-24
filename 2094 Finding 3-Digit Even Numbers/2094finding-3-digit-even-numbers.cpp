class Solution {
    void solve(int &num,vector<bool>& used,vector<int>&digits,vector<int>&res,int idx)
    {
        if(idx==3)
        {
            if(num%2==0)
            {
                res.push_back(num);

            }
            return ;
        }
        for(int i=0;i<digits.size();i++)
        {
            if(used[i])
            {
                continue;
            }
            if(idx==0 && digits[i]==0)
            {
                continue;
            }
            used[i]=true;
            num=num*10+digits[i];
            solve(num,used,digits,res,idx+1);
            used[i]=false;
            num/=10;
        }
    }
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        vector<bool>used(digits.size(),false);
        vector<int>res;
        int num=0;
        sort(digits.begin(),digits.end());
        solve(num,used,digits,res,0);
        sort(res.begin(),res.end());
        res.erase(unique(res.begin(),res.end()),res.end());
        return res;
    }
};