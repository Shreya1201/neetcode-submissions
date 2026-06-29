class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<9;i++){
            unordered_set<char> s;
            for(int j=0;j<9;j++){
                if (board[i][j] == '.')
                    continue;
                if(s.count(board[i][j]))
                return false;
                s.insert(board[i][j]);
            }
        }
        for(int i=0;i<9;i++){
            unordered_set<char> s;
            for(int j=0;j<9;j++){
                if (board[j][i] == '.')
                    continue;
                if(s.count(board[j][i]))
                return false;
                s.insert(board[j][i]);
            }
        }
        for(int i=0;i<9;i+=3){
            for(int j=0;j<9;j+=3){
                unordered_set<char> s;
                for(int k=i;k<i+3;k++){
                    for(int l=j;l<j+3;l++){
                        if(board[k][l]=='.')
                        continue;
                        if(s.count(board[k][l]))
                            return false;
                        s.insert(board[k][l]);
                    }
                }
            }
        }
        return true;
        
    }
};
