class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m=grid.size();
        int n=grid[0].size();
        
        vector<int>a(m*n);
        int p=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                a[p]=grid[i][j];
                p++;
            }
        }
        k=k%(m*n);
        rotate(a.begin(),a.end()-k,a.end());
        p=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                grid[i][j]=a[p++];
            }
        }
        return grid;
    }
};