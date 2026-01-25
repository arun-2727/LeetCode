class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        int n=nums.size();
        
        sort(nums.begin(),nums.end());
        int mindif=INT_MAX;
        if(k==1)
        {
            return 0;
        }
        for(int i=0;i+k-1<n;i++)
        {
            mindif=min(mindif,nums[i+k-1]-nums[i]);
        }
        return mindif;
    }
};