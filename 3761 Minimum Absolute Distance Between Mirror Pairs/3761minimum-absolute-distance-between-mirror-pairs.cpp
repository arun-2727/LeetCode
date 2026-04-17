class Solution {
public:
    int minMirrorPairDistance(vector<int>& nums) {
        unordered_map<int,int>mapp;
        int d=INT_MAX;
        for(int i=0;i<nums.size();i++)
        {
            int x=nums[i];
            if(mapp.find(x)!=mapp.end())
            {
                d=min(d,i-mapp[x]);
            }
            int temp=0;
            while(x>0)
            {
                int rem=x%10;
                while(rem==0)
                {
                    x/=10;
                    continue;
                }
                temp=temp*10+rem;
                x/=10;
            }
            mapp[temp]=i;
        }
        if(d==INT_MAX)
        {
            return -1;
        }
        else return d;
    }
};