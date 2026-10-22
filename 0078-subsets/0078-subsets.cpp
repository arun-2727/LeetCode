class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int t=1<<(nums.size());
        vector<vector<int>>res(t);
        for(int i=0;i<t;i++)
        {
            for(int j=0;j<nums.size();j++)
            {
                if(i&(1<<j))
                {
                    res[i].push_back(nums[j]);
                }
            }
        }
        return res;
    }
};