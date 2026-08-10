class Solution {

    int solve(int idx)
    {
        if(idx==0)
        {
            return 0;
        }
        else if(idx==1)return 1;
        return solve(idx-1)+solve(idx-2);
    }
public:
    int fib(int n) {
       return solve(n);
    }
};