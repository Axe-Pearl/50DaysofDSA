class Solution {
public:
    string largestOddNumber(string num) {
        string ans = "";
        string res = "";
        for(int i=num.size()-1;i>=0;i--){
            int temp = num[i] - '0';
            
            if(temp%2 == 0){
                if(ans == ""){
                    continue;
                }
                ans+=num[i];
            }
            else if(temp%2!=0){
                ans+=num[i];
            }
        }
        for(int i = ans.size()-1;i>=0;i--){
            res+=ans[i];
        }
        return res;
    }
};
