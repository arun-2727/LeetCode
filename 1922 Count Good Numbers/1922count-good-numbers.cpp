class Solution {
    long long modd=1e9+7;
    int power(long long x,long long exp)
    {
        if(exp==0)return 1;
        if(exp==1)return x%modd;
        if(exp%2==0)return power((x*x)%modd,exp/2);
        return (x*power((x*x)%modd,exp/2))%modd;
    }
public:
    int countGoodNumbers(long long n) {
       long long even=(n+1)/2;
       long long odd=n/2;
       return (1LL*power(5,even)*power(4,odd))%modd;
    }
};