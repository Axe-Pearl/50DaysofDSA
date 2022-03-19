class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        int x,y;
         vector<vector<int>> mat( m , vector<int> (n, 0));
        int count = 0;
        for(int i=0;i<indices.size();i++){
            x = indices[i][0];
            y = indices[i][1];
            for(int j=0;j<n;j++){
                mat[x][j]+=1;
            }
             for(int k=0;k<m;k++){
                mat[k][y]+=1;
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cout<<mat[i][j]<<" ";
                if(mat[i][j]%2!=0){
                    count++;
                }
            }
        }
        return count;
    }
};
