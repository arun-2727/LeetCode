class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int c=0;
        int maxc=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                maxc=max(maxc,c);
                c=0;
            }
            else
            {
                c++;
            }
        }
        maxc=max(maxc,c);
        return maxc;
    }
};