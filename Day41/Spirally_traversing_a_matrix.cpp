// { Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        int rowBegin = 0, rowEnd = r-1;
        int colBegin = 0, colEnd = c-1;
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
            //traverse left
            if(rowBegin<=rowEnd){
            for(int j = colEnd;j>=colBegin;j--){
                res.push_back(matrix[rowEnd][j]);
            }
            }
            rowEnd--;
            //traverse up
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

// { Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends
