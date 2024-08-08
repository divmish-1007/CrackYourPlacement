class Solution {
public:
     int countLiveighbours(vector<vector<int>>& board, int r, int c, int n, int m){
        vector<int> dr = {-1, -1, 0, 1, 1, 1, 0, -1};
        vector<int> dc = {0, -1, -1, -1, 0, 1, 1, 1};
        int countlive = 0;
        for(int i=0; i<8; i++){
            int newr = r + dr[i];
            int newc = c + dc[i];
            if(newr>=0 && newr<n && newc>=0 && newc<m && board[newr][newc] == 1){
                countlive++;
            }
        }
        return countlive;
    }

    void gameOfLife(vector<vector<int>>& board) {
        int n = board.size();
        int m = board[0].size();
        vector<vector<int>>newBoard(n, vector<int>(m, 0));

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){

                int countOnes = countLiveighbours(board, i, j, n, m);

                if(board[i][j] == 0){
                    if(countOnes == 3) newBoard[i][j] = 1;
                }
                if(board[i][j] == 1) {
                    if(countOnes == 2 || countOnes == 3) newBoard[i][j] = 1;
                }
            }
        }
        board = newBoard;
    }
};