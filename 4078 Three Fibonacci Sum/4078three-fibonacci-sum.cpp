class Solution {
public:
    bool threeFibonacciSum(int n) {
        long long x1=0;
        long long x2=1;
        while(1)
        {
            long long temp=x1+x2;
            if(temp*2==n)return true;
            if(temp*2>n)break;
            x1=x2;
            x2=temp;
        }
        return false;
    }
};