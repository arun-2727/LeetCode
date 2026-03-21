class Solution {
public:
    vector<vector<int>> minAbsDiff(vector<vector<int>>& grid, int k) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>res(n-k+1,vector<int>(m-k+1));
        for(int i=0;i<=n-k;i++)
        {
            for(int j=0;j<=m-k;j++)
            {
                vector<int>temp;
                for(int x=i;x<i+k;x++)
                {
                    for(int y=j;y<j+k;y++)
                    {
                        temp.push_back(grid[x][y]);
                    }
                }
                sort(temp.begin(),temp.end());
                temp.erase(unique(temp.begin(), temp.end()), temp.end());
                if (temp.size() <= 1) {
                    res[i][j] = 0;
                } else 
                    {
                        int mn = INT_MAX;
                        for (int p = 0; p < temp.size() - 1; p++)
                            mn = min(mn, temp[p+1] - temp[p]);
                        res[i][j] = mn;
                    }
            }
        }
       return res;
    }
};