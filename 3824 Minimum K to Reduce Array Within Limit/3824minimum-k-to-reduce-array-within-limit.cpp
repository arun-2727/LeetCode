class Solution {
    bool ok(vector<int>& nums,long long k)
    {
        long long count=0;
        for(int x:nums)
            {
                count+=(x+k-1)/k;
                if(count>k*k)return false;
            }
        return true;
    }
public:
    int minimumK(vector<int>& nums) {
        long long left=1,right=1;
        
        while(!ok(nums,right))
            {
                right*=2;
                
            }
        long long res=right;
        while(left<=right)
            {
                long long mid=(left+right)/2;
                if(ok(nums,mid))
                {
                    res=mid;
                    right=mid-1;
                }
                else
                {
                    left=mid+1;
                }
            }
        return res;
    }
};