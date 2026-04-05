class Solution {
public:
    vector<int> findGoodIntegers(int n) {
       unordered_map<int,int>mapp;
        vector<int>res;
        int t=cbrt(n);
        for(int i=1;i<=t;i++)
            {
                for(int j=i;j<=t;j++)
                    {
                        long long sum=i*i*i+j*j*j;
                        if(sum>n)break;
                        mapp[sum]++;
                    }
            }
        for(auto& p:mapp)
            {
                if(p.second>=2)
                {
                    res.push_back(p.first);
                }
            }
        sort(res.begin(),res.end());
        return res;
    }
};