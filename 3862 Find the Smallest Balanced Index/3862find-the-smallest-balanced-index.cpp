class Solution {
public:
    int smallestBalancedIndex(vector<int>& nums) {
        vector<long long>sum(nums.size());
        sum[0]=0;
        for(int i=1;i<nums.size();i++)
            {
                sum[i]=sum[i-1]+nums[i-1];
            }
        const long long LIMIT = 1e14;

        vector<long long> prod(nums.size());
        prod[nums.size()-1] = 1;

        for(int i = nums.size()-2; i >= 0; i--){
            if(prod[i+1] > LIMIT / nums[i+1])
                prod[i] = LIMIT;
            else
                prod[i] = prod[i+1] * nums[i+1];
        }
          for(int i=0;i<nums.size();i++)
              {
                  if(sum[i]==prod[i])
                  {
                      return i;
                  }
              }
        return -1;
    }
};