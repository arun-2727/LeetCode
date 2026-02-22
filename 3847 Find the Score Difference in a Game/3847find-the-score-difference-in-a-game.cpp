class Solution {
public:
    int scoreDifference(vector<int>& nums) {
        int o=0;
        int s=0;
        int d=1;
        for(int i=0;i<nums.size();i++)
            {
                if(nums[i]%2==1)
                {
                    d=-d;
                }
                    
                if(i%6==5)
                {
                    d=-d;
                }
                if(d==1)
                {
                    o+=nums[i];
                }
                else
                {
                    s+=nums[i];
                }
            }
        return o-s;
    }
};