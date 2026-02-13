class Solution {
public:
    vector<int> constructRectangle(int area) {
        vector<int>res(2,0);
        for(int i=sqrt(area);i>=1;i--)
        {
            int w=area/i;
            if(area==i*w)
            {
                res[0]=w;
                res[1]=i;
                break;
            }
        }
        return res;
    }
};