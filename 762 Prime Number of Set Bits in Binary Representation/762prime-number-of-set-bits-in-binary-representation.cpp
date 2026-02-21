class Solution {
    int countbits(int n)
    {
        int cnt=0;
        while(n>0)
        {
            if(n&1==1)cnt++;
            n>>=1;
        }
        return cnt;
    }
    bool isprime(int n)
    {
        if(n==2 || n==3 || n==5 || n==7 || n==11 || n==13 || n==17 || n==19)
        {
            return true;
        }
        else return false;
    }
public:
    int countPrimeSetBits(int left, int right) {
        int cnt=0;
        for(int i=left;i<=right;i++)
        {
            int n=countbits(i);
            if(isprime(n))cnt++;
        }
        return cnt;
    }
};