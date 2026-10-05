class Solution {
    void solve(int idx,vector<vector<int>>&res,vector<int>&nums,int k,vector<int>&temp)
    {
        if(idx==nums.size())
        {
            if(temp.size()==k)
            {
                res.push_back(temp);
                
            }
            return;
        }
        temp.push_back(nums[idx]);
        solve(idx+1,res,nums,k,temp);
        temp.pop_back();
        solve(idx+1,res,nums,k,temp);
        return;
    }

public:
    vector<vector<int>> combine(int n, int k) {
       vector<vector<int>>res;
       vector<int>nums(n);
       for(int i=0;i<n;i++)
       {
        nums[i]=i+1;
       }
       vector<int>temp;
       solve(0,res,nums,k,temp);
       return res;
    }
};