class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int l=0,h=n-1;
        int res=n;
        while(l<=h)
        {
            int mid=(l+h)/2;
            if(nums[mid]>=target)
            {
                res=mid;
                h=mid-1;
            }
            else if(nums[mid]<target)
            {
                l=mid+1;
            }
        }
        return res;
    }
};