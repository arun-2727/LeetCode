class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int left=0,sum=0;
        int ans=n+1;
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
            while(sum>=target)
            {
                ans=min(ans,i-left+1);
                sum=sum-nums[left];
                left++;
            }
        }
        return ans==n+1?0:ans;
        
    }
};