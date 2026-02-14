class Solution {
public:
    long long rob(vector<int>& nums, vector<int>& colors) {
        int n=nums.size();
        vector<long long>dp(nums.size());
        if(nums.size()==0)return 0;
        if(nums.size()==1)return nums[0];
        dp[0]=nums[0];
        if(colors[1]==colors[0])dp[1]=max((long long)nums[0],(long long)nums[1]);
        else
        {
            dp[1]=nums[0]+nums[1];
        }
        
        for(int i=2;i<nums.size();i++)
            {
                if(colors[i]==colors[i-1])
                {
                    dp[i]=max(dp[i-1],nums[i]+dp[i-2]);
                }
                else
                {
                    dp[i]=dp[i-1]+nums[i];
                }
            }
        return dp[n-1];
    }
};