class Solution {
    void solve(int idx,vector<vector<int>>&res, vector<int>& temp,vector<int>& nums)
    {
        res.push_back(temp);
        for(int i=idx;i<nums.size();i++)
        {
            if(i>idx && nums[i]==nums[i-1])continue;
            temp.push_back(nums[i]);
            solve(i+1,res,temp,nums);
            temp.pop_back();
        }
        return;
    }
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>res;
        vector<int>temp;
        solve(0,res,temp,nums);
        return res;
    }
};