class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for (int i = 0; i < 9; i++){
            map<char,bool> check;
            for (int j = 0; j < 9; j++){
                if (board[i][j] != '.'){
                    if ((check.find(board[i][j]) != check.end())) {
                        return false;
                    } else {
                        check[board[i][j]] = true;
                    }
                }
            }
        }
            
        for (int j = 0; j < 9; j++){
            map<char,bool> check;
            for (int i = 0; i < 9; i++){
                if (board[i][j] != '.'){
                    if ((check.find(board[i][j]) != check.end())) {
                        return false;
                    } else {
                        check[board[i][j]] = true;
                    }
                }
            }
        }
        
        for (int i = 0; i <= 6; i = i+3){
            for (int j = 0; j <= 6; j = j+3){
                map<char, bool> check;
                for (int k = 0; k <3; k++){
                    for (int l = 0; l < 3; l++){
                        int x = i + k;
                        int y = j + l;
                        if (board[x][y] != '.'){
                            if ((check.find(board[x][y]) != check.end())) {
                                return false;
                            } else {
                                check[board[x][y]] = true;
                            }
                        }
                    }
                }
            }
        }
        return true;
    }
    
};