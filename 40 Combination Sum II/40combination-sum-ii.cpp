class Solution {
    void solve(int idx,vector<vector<int>>&res,vector<int>&temp,vector<int>&candidates,int target)
    {
        if(target==0)
        {
            res.push_back(temp);
            return;
        }
        for(int i=idx;i<candidates.size();i++)
        {
            if(i>idx && candidates[i-1]==candidates[i])
            {
                continue;
            }
            if(candidates[i]>target)break;
            temp.push_back(candidates[i]);
            solve(i+1,res,temp,candidates,target-candidates[i]);
            temp.pop_back();
        }
        
    }
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>>res;
        sort(candidates.begin(),candidates.end());
        vector<int>temp;
        solve(0,res,temp,candidates,target);
        return res;
    }
};