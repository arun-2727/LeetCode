class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        vector<long long>res(nums.size());
        int mx=0;
        
        for(long long i=0;i<nums.size();i++)
            {
                mx=max(mx,nums[i]);
                res[i]=gcd((long long)nums[i],(long long)mx);
            }
        sort(res.begin(),res.end());
        long long ans=0;
        for(long long i=0;i<nums.size()/2;i++)
            {
                long long g=gcd(res[i],res[nums.size()-i-1]);
                ans+=g;
            }
        return ans;
            
    }
};