class Solution {
    void solve(int idx,vector<vector<int>>&res,vector<int>&candidates, int target,vector<int>& temp,int n)
    {
        if(idx==n)
        {
            if(target==0)
            {
                res.push_back(temp);
            }
            return;
        }
        if(candidates[idx]<=target)
        {
            temp.push_back(candidates[idx]);
            solve(idx,res,candidates,target-candidates[idx],temp,n);
            temp.pop_back();
        }
        
        
        solve(idx+1,res,candidates,target,temp,n);
        return;
    }
   
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>res;
        int n=candidates.size();
        vector<int>temp;
        solve(0,res,candidates,target,temp,n);
        return res;
    }
};