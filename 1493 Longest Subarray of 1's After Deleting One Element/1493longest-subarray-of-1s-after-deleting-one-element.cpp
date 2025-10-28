class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int count=0;
        int maxcount=0;
        int l=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                count++;
            }
            if(count>1)
            {
                if(nums[l]==0)
                {
                    count--;
                }
                l++;
                
            }
            maxcount=max(maxcount,i-l);
        }
        return maxcount;
    }
};