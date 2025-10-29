class Solution {
public:
    int smallestNumber(int n) {
       if(n&(n+1)==0)
       {
        return n;
       }
       int temp=n,k=0;
       while(temp>0)
       {
        k++;
        temp>>=1;
       }
       return (1<<k)-1;
    }
};