class Solution {
public:
    int smallestNumber(int n, int t) {
        int temp=t;
        for(int i=n;i<n+10;i++)
        {
            int num;
            if(i/10==0)
            {
                num=i;
            }
            else
            {
                num=(i%10)*(i/10);
            }
            if(num%t==0)
            {
                return i;
            }
        }
        return 0;
    }
};