class Solution {
public:
    int mySqrt(int x) {
        long long root,ans=0;
        long long l=0;
        long long high=x;
        if (x == 0 || x == 1) return x;
        while(l<=high)
        {
            long long mid=l+ (high - l) / 2;
            root=mid*mid;
            if(x==root)
            {
                return mid;
            }
            else if(root<x)
            {
                ans=mid;
                l=mid+1;
            }
            else
            {
                high=mid-1;
            }
        }
        return ans;
    }
};