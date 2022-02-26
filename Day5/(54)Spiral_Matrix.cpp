class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int rowBegin = 0, rowEnd = matrix.size()-1;
        int colBegin = 0, colEnd = matrix[0].size()-1;
        vector<int>res;
      
        while(rowBegin<=rowEnd && colBegin<=colEnd){
            //traverse right
            for(int j = colBegin;j<=colEnd;j++){
                res.push_back(matrix[rowBegin][j]);
            }
            rowBegin++;
            
            //traverse down
            for(int i = rowBegin;i<=rowEnd;i++){
                res.push_back(matrix[i][colEnd]);
            }
            colEnd--;
            
            //trverse left
            if(rowBegin<=rowEnd){
                for(int j=colEnd;j>=colBegin;j--){
                    res.push_back(matrix[rowEnd][j]);
                }
            }
            rowEnd--;
            if(colBegin<=colEnd){
                for(int i = rowEnd;i>=rowBegin;i--){
                    res.push_back(matrix[i][colBegin]);
                }
            }
            colBegin++;
            
        }
        return res;
    }
};
