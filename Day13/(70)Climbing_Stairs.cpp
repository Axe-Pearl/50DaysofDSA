class Solution {
public:
    int climbStairs(int n) {
        vector<int> countKeeper(n,0);
        return climbStairs(n,countKeeper);
    }
    
    int climbStairs(int n,vector<int> & countKeeper){
        if(n == 1){
            countKeeper[n-1] = 1;
            return countKeeper[n-1];
        }
        if(n == 2){
            countKeeper[n-1] = 2;
            return countKeeper[n-1];
        }
        if(countKeeper[(n-1)-1] == 0 ){
           climbStairs(n-1,countKeeper);
        }
        if(countKeeper[(n-1)-2] == 0 ){
           climbStairs(n-2,countKeeper);
        }
        countKeeper[n-1] = countKeeper[(n-1)-1]+countKeeper[(n-1)-2];
     return  countKeeper[n-1];
       
    }
};
