class Solution {
public:
    vector<int> maxPrimes(int n, int s) {
        vector<bool>prime(n+1,true);
        prime[0]=false;
        prime[1]=false;
        for(int i=2;i*i<=n;i++)
        {
            if(prime[i])
            {
                for(int j=i*i;j<=n;j+=i)
                {
                    prime[j]=false;
                }
            }
        }
        vector<int>res;
        for(int i=2;i<=n;i++)
        {
            if(prime[i])
            {
                if(i>s)
                {
                    break;
                }
                res.push_back(i);
                s-=i;
            }
        }
        return res;
    }
};