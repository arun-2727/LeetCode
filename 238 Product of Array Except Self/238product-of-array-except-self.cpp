class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> res(n,0);
        vector<int> leftprod(n,1);
        vector<int> rightprod(n,1);
        for(int i=1;i<n;i++)
        {
            leftprod[i]=leftprod[i-1]*nums[i-1];
        }
        for(int i=n-2;i>=0;i--)
        {
            rightprod[i]=rightprod[i+1]*nums[i+1];
        }
        for(int i=0;i<n;i++)
        {
            res[i]=leftprod[i]*rightprod[i];
        }
        return res;

        
        
    }
};