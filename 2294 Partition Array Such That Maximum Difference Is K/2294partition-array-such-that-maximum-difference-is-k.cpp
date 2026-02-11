class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        int c=1;
        sort(nums.begin(),nums.end());
        int mini=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]-mini>k)
            {
                mini=nums[i];
                c++;
            }
        }
        return c;
    }
};