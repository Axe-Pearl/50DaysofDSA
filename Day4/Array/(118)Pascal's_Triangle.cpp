class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>res;
        vector<int>temp;
        res.push_back({1});
        for(int i = 1;i<numRows;i++){
            temp.push_back(1);
            for(int j = 1;j<res[i-1].size();j++){
                int tmp = res[i-1][j-1]+res[i-1][j];
                temp.push_back(tmp);
            }
            temp.push_back(1);
            res.push_back({temp});
            temp.clear();
        }
        return res;
    }
};
