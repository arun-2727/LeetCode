class Solution {
    void solve(int idx,int n,vector<vector<int>>&res,vector<int>temp,vector<int>nums)
    {
        if(idx==n)
        {
            res.push_back(temp);
            return;
        }
        temp.push_back(nums[idx]);
        solve(idx+1,n,res,temp,nums);
        temp.pop_back();
        solve(idx+1,n,res,temp,nums);
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>res;
        solve(0,n,res,{},nums);
        return res;
    }
};