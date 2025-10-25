class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> mapp;
        for(int i=0;i<nums.size();i++)
        {
            if(mapp.count(nums[i]))
            {
                return true;
            }
            mapp[nums[i]]=i;
        }
        return false;
    }
};