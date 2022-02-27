class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> answer;
        vector<int> temp = intervals[0];
        
        for(auto it : intervals){
            if(it[0] <= temp[1]){
                temp[1] = max(it[1],temp[1]);
            }
            else{
                answer.push_back(temp);
                temp = it;
            }
        }
        
        answer.push_back(temp);
        return answer;
    }
};
