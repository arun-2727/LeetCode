class Solution {
public:
    vector<vector<int>> findDisappearedNumbers(vector<int>& nums, int lower, int upper) {
        vector<vector<int>>res;
        sort(nums.begin(),nums.end());
        int start=lower-1;
        for(int i=0;i<nums.size();i++)
            {
                if(nums[i]<lower)
                {
                    continue;
                }
                if(nums[i]>upper)
                {
                    break;
                }
                if(nums[i]>start+1)
                {
                    res.push_back({start+1,nums[i]-1});
                    
                }
                start=nums[i];
               
                
            } 
        if(start<upper)
                {
                    res.push_back({start+1,upper});
                }
        return res;
    }
};