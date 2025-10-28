class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0;
        int r=height.size()-1;
        long long maxarea=0;
        while(l<r)
        {
            int h=min(height[r],height[l]);
            int w=r-l;
            long long area=h*w;
            maxarea=max(maxarea,area);
            if(height[l]<height[r])
            {
                l++;
            }
            else
            {
                r--;
            }
        }
        return maxarea;
    }
};