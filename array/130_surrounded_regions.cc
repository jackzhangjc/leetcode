class Solution {
public:
    void solve(vector<vector<char>>& board) {

        int n = board.size();
        if (n < 1) return;
        int m = board[0].size();
        
        for (int i = 0; i < n; i++){
            work(i, 0, board);
            work(i, m -1, board);
        }
        for (int i = 0; i < m; i++){
            work(0, i, board);
            work(n - 1, i, board);
        }
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                if (board[i][j] == 'O'){
                    board[i][j] = 'X';
                } else if (board[i][j] == '*')
                    board[i][j] = 'O';
            }
        }
        
    }
    
    void work(int i, int j, vector<vector<char>>& board){
        int n = board.size();
        int m = board[0].size();
        queue<pair<int, int>> q;
        q.push({i, j});
        
        while (!q.empty()){
            pair<int, int> c = q.front();
            q.pop();
            int a = c.first;
            int b = c.second;
            if (a >= 0 && b >= 0 && a < n && b < m){
                if (board[a][b] == 'O') {
                    board[a][b] = '*';
                    q.push({a - 1, b});
                    q.push({a + 1, b});
                    q.push({a, b - 1});
                    q.push({a, b + 1});
                }
            }
        }

        
    }
    
    
};