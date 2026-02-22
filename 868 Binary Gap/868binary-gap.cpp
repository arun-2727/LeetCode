class Solution {
public:
    int binaryGap(int n) {
        n>>=__builtin_ctz(n);
        if(n==1)return 0;
        int maxi=0;
        int cnt=0;
        while(n>0)
        {
            if(n&1)
            {
                maxi=max(maxi,cnt);
                cnt=0;
            }
            else
            {
                cnt++;
            }
            n>>=1;
        }
        return maxi+1;
    }
};