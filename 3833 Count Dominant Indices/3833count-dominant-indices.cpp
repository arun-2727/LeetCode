class Solution {
public:
    int dominantIndices(vector<int>& nums) {
        int res=0;
        int n=nums.size();
        vector<long long>suff(nums.size());
        if(nums.size()==1)return 0;
        suff[nums.size()-1]=nums[nums.size()-1];
        for(int i=nums.size()-2;i>=0;i--)
            {
                suff[i]=suff[i+1]+nums[i];
            }
        for(int i=0;i<nums.size()-1;i++)
            {
                long long r=suff[i]-nums[i];
                int rc=n-i-1;
                if((long long)nums[i]*rc >r)
                {
                    res++;
                }
            }
        return res;
    }
};