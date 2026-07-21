class Solution {
    int countsetbits(int n)
    {
        int c=0;
        while(n>0)
        {
            if(n&1)c++;
            n>>=1;

        }
        return c;
    }
public:
    vector<int> countBits(int n) {
        vector<int>ans(n+1);
        for(int i=0;i<=n;i++)
        {
            ans[i]=countsetbits(i);
        }
        return ans;
    }
};