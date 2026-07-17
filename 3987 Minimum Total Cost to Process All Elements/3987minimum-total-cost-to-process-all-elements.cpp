class Solution {
public:
    int minimumCost(vector<int>& nums, int k) {
        long long modd=1e9+7;
        long long c=0;
        long long t=k;
        for(int i=0;i<nums.size();i++)
            {
               
                if(t<nums[i])
                {
                    long long req=nums[i]-t;
                    long long add=(req+k-1)/k;
                    t+=1LL*add*k;
                    c+=add;
                }
                t-=nums[i];
            }
        long long a = c;
        long long b = c + 1;

        if (a % 2 == 0)
            a /= 2;
        else
            b /= 2;

        return (int)((a % modd) * (b % modd) % modd);
    }
};