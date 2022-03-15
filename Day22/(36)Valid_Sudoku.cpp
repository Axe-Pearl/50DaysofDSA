class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int passer1[9][9] = {0}, passer2[9][9] = {0}, passer3[9][9] = {0};
        
        for(int i = 0;i<board.size();i++){
            for(int j = 0;j<board[i].size();j++){
                if(board[i][j]!='.'){
                   int num = board[i][j]- '0' -1, k = i/3 * 3 + j/3;
                   if(passer1[i][num] || passer2[j][num] || passer3[k][num]){
                    return false;
                   }
                   passer1[i][num] = passer2[j][num] = passer3[k][num] = 1;
                }
            }
        }
        return true;
    }
};
