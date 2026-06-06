class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int>l(nums.size());
        vector<int>r(nums.size());
        l[0]=0;
        for(int i=1;i<nums.size();i++)
        {
            l[i]=nums[i-1]+l[i-1];
        }
        r[nums.size()-1]=0;
        for(int i=nums.size()-2;i>=0;i--)
        {
            r[i]=nums[i+1]+r[i+1];
        }
        vector<int>res(nums.size());
        for(int i=0;i<nums.size();i++)
        {
            res[i]=abs(l[i]-r[i]);
        }
        return res;
    }
};