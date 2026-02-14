class Solution {
public:
    double champagneTower(int poured, int query_row, int query_glass) {
        vector<vector<double>>glass;
        for(int i=1;i<=100;i++)
        {
            vector<double>x(i,0.0);
            glass.push_back(x);
        }
        glass[0][0]=poured;
        for(int i=0;i<query_row;i++)
        {
            for(int j=0;j<=i;j++)
            {   
                if(glass[i][j]>1.0)
                {
                    double div=(glass[i][j]-1)/2.0;
                    glass[i+1][j]+=div;
                    glass[i+1][j+1]+=div;
                    glass[i][j]=1;
                }
                
            }
        }
        return min(1.0,glass[query_row][query_glass]);
    }
};