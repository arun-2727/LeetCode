class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int l=0;
        int r=nums.size()-1;
        int maxsum=INT_MIN;
        while(l<r)
        {
            int sum=nums[l]+nums[r];
            maxsum=max(maxsum,sum);
            l++;
            r--;
        }
        return maxsum;
    }
};