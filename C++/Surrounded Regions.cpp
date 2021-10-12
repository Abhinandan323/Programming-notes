class Solution {
public:
    void solve(vector<vector<char>>& board) {
        for(int i=0; i<board.size(); i++) {
            for(int j=0; j<board[0].size(); j++) {
                if(i==0 || j==0 || i==board.size()-1 || j==board[0].size()-1) {
                    if(board[i][j] == 'O') {
                        dfs(board, i, j);
                    }
                }
            }
        }
        for(int i=0; i<board.size(); i++) {
            for(int j=0; j<board[0].size(); j++) {
                if(board[i][j] == 'O')  board[i][j] = 'X';
                if(board[i][j] == 'V')  board[i][j] = 'O';
            }
        }
    }

    void dfs(vector<vector<char>>& board, int i, int j) {
        if(i>=0 && j>=0 && i<board.size() && j<board[0].size() && board[i][j]!='X' && board[i][j]!='V') {
            board[i][j] = 'V';
            dfs(board, i, j-1);
            dfs(board, i, j+1);
            dfs(board, i-1, j);
            dfs(board, i+1, j);
        }
    }

    bool isNotValid(int i, int j, int row, int col) {
        if(i-1<0 || i+1>=row || j-1<0 || j+1>=col) {
            return true;
        }
        return false;
    }
};
