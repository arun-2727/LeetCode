class Solution {
public:
    int minOperations(vector<int>& nums) {
        int num=0;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]>=nums[i+1])
            {num+=nums[i]-nums[i+1]+1;
                nums[i+1]+=nums[i]-nums[i+1]+1;
                
            }
        }
        return num;
    }
};