class Solution {
    int countbits(int n)
    {
        int cnt=0;
        while(n>0)
        {
            if((n&1)==1)cnt++;
            n>>=1;
        }
        return cnt;
    }
public:
    vector<int> sortByBits(vector<int>& arr) {
        vector<pair<int,int>>res;
        for(int i=0;i<arr.size();i++)
        {
            res.push_back({countbits(arr[i]),arr[i]});
        }
        sort(res.begin(),res.end());
        vector<int>res1;
        for(auto& p:res)
        {
            res1.push_back(p.second);
        }
        return res1;
    }
};