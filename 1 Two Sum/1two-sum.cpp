class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mapp;
        for(int i=0;i<nums.size();i++)
        {
            int rev=target-nums[i];
            if(mapp.count(rev))
            {
                return {mapp[rev],i};
            }
            mapp[nums[i]]=i;
        }
        return {};
    }
};