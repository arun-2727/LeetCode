class Solution {
    bool search(int i,int j,int n,int m,vector<vector<char>>& board, string& word,int k)
    {
        if(k==word.size())return true;
        if(i<0 || j<0 || i==n || j==m || board[i][j]!=word[k])return false;
        board[i][j]='#';
        bool up=search(i-1,j,n,m,board,word,k+1);
        bool down=search(i+1,j,n,m,board,word,k+1);
        bool r=search(i,j+1,n,m,board,word,k+1);
        bool l=search(i,j-1,n,m,board,word,k+1);
        board[i][j]=word[k];
        return (up || down || l || r);
    }
public:
    bool exist(vector<vector<char>>& board, string word) {
        int n=board.size();
        int m=board[0].size();
        for(int i=0;i<board.size();i++)
        {
            for(int j=0;j<board[i].size();j++)
            {
                if(board[i][j]==word[0])
                {
                   if(search(i,j,n,m,board,word,0))
                   {
                    return true;
                   }
                }
            }
        }
        return false;
    }
};