class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> res;
        vector<int> temp;
        sort(intervals.begin(),intervals.end());
        res.push_back(intervals[0]);
        int resIdx = 0;
        for(int i = 1;i<intervals.size();i++){
            int preva = res[resIdx][0], prevb = res[resIdx][1];
            int curra = intervals[i][0], currb = intervals[i][1];
            
            if(prevb >= curra){
                if(prevb <= currb){
                    res[resIdx][1] = currb;
                }
                else if(prevb >= currb){
                     res[resIdx][1] = prevb;
                } 
            }
            else{
                res.push_back(intervals[i]);
                resIdx++;
            }
        }
        return res; 
    }
};
