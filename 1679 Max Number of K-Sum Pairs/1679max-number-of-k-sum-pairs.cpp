class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int count=0;
        int j=nums.size()-1;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size() && i<j;)
        {
            
            if(nums[i]+nums[j] == k)
            {
                count++;
                j--;
                i++;
            }
            else if(nums[i]+nums[j]<k)
            {
                i++;
            }
            else
            {
                j--;
            }
        }
        return count;
    }
};