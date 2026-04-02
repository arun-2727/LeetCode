class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>res={-1,-1};
        int n=nums.size();
        int l=0,h=n-1;
        int p1=lower_bound(nums.begin(),nums.end(),target)-nums.begin();
        int p2=upper_bound(nums.begin(),nums.end(),target)-nums.begin()-1;
        if(p1==n || nums[p1]!=target)
        {
            return res;
        }
        else
        {
            res={p1,p2};
        }
        return res;
    }
};