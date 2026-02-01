class Solution {
public:
    int countMonobit(int n) {
        int c=1;
        long long x=1;
        while(x<=n)
            {
                c++;
                x=(x<<1)|1;
            }
        return c;
    }
};