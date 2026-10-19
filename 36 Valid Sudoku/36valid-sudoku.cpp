class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_set<char>> row(9);
        vector<unordered_set<char>> col(9);
        vector<unordered_set<char>> submat(9);

        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                if(board[i][j]!='.')
                {
                    char c=board[i][j];
                    int idx=3*(i/3)+(j/3);
                    if(row[i].count(c) || col[j].count(c) || submat[idx].count(c))return false;
                    row[i].insert(c);
                    col[j].insert(c);
                    submat[idx].insert(c);
                }
            }
        }
        return true;
    }
};