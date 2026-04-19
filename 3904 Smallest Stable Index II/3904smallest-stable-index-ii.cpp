class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        vector<long long>mx(n),mn(n);
        mx[0]=nums[0];
        for(int i=1;i<n;i++)
            {
                mx[i]=max(1LL*nums[i],mx[i-1]);
            }
        mn[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--)
            {
                mn[i]=min(mn[i+1],1LL*nums[i]);
            }
        for(int i=0;i<n;i++)
            {
                long long sc=mx[i]-mn[i];
                if(sc<=k)
                {
                    return i;
                }
            }
        return -1;
    }
};