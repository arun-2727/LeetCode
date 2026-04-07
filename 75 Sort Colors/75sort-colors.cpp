class Solution {
public:
    void sortColors(vector<int>& nums) {
        int left=0;
        int mid=0;
        int right=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)left++;
            else if(nums[i]==1)mid++;
            else right++;
        }
        for(int i=0;i<left;i++) nums[i]=0;
        for(int i=left;i<left+mid;i++)nums[i]=1;
        for(int i=left+mid;i<nums.size();i++)nums[i]=2;
        
    }
};