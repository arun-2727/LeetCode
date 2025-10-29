class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int n=grid[0].size();
        int count=0;
        map<vector<int>,int> mapp;
        for(int i=0;i<n;i++)
        {
            mapp[grid[i]]++;
        }
        for(int j=0;j<n;j++)
        {
            vector<int> col;
            for(int i=0;i<n;i++)
            {
                col.push_back(grid[i][j]);
            }
            if(mapp.count(col))
            {
                count+=mapp[col];
            }
        }
        return count;
    }
};