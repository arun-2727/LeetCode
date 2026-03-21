class Solution {
public:
    vector<vector<int>> reverseSubmatrix(vector<vector<int>>& grid, int x, int y, int k) {
        for(int i=x,p=x+k-1;i<p;i++,p--)
        {
            for(int j=y;j<y+k;j++)
            {
                swap(grid[i][j],grid[p][j]);
            }
        }
        return grid;
    }
};