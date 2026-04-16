class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mapp;
        mapp[0]=1;
        int sum=0;
        int cnt=0;
        for(int x:nums)
        {
            sum+=x;
            int compli=sum-k;
            if(mapp.find(compli)!=mapp.end())
            {
                cnt+=mapp[compli];
            }
            mapp[sum]++;
        }
        return cnt;
    }
};