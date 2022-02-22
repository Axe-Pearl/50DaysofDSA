class Solution {
public:
    int fib(int n) {
        int f = 0, s = 1;
        int ans = 0;
        int temp = 0;
        if(n == 0){
            return 0;
        }
        if(n == 1){
            return 1;
        }
        while(temp<n-1){
            ans = f+s;
            f = s;
            s = ans; 
            temp++;
        }
        return ans;
    }
};
