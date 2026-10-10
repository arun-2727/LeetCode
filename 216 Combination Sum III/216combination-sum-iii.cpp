class Solution {
    void solve(int idx,vector<vector<int>>&res,vector<int>&temp,vector<int>&nums,int k,int n,int sum)
    {   
        if(idx==9)
        {  
             if(temp.size()==k)
            {
                if(sum==n)
                {
                    res.push_back(temp);
                   
                }
                
            }
            return;
        }
        if(nums[idx]+sum<=n)
        {
            temp.push_back(nums[idx]);
            sum+=nums[idx];
            solve(idx+1,res,temp,nums,k,n,sum);
            temp.pop_back();
            sum-=nums[idx];
        }
        solve(idx+1,res,temp,nums,k,n,sum);
        return;
        
    }
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>nums(9);
        for(int i=0;i<9;i++)nums[i]=i+1;
        vector<vector<int>>res;
        vector<int>temp;
        solve(0,res,temp,nums,k,n,0);
        return res;
    }
};