class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>res(n);
        for(int i=0;i<n;i++)
        {
            if(nums[i]==0)
            {
                res[i]=nums[i];
            }
            else 
            {
                int jump=nums[i]%n;
                int idx=(i+jump)%n;
                if(idx<0)idx+=n;
                res[i]=nums[idx];
            }
            
        }
        return res;
        
    }
};