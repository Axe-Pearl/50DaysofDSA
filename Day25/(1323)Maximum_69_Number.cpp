class Solution {
public:
    int maximum69Number (int num) {
        vector<int> v;
        int r;
        while(num>0){
            r = num%10;
            v.push_back(r);
            num = num/10;
        }
        int number = 0;
        int flag = 0;
        for(int i = v.size()-1;i>=0;i--){
            if(v[i] == 6 && flag == 0){
               v[i] = 9;
                flag = 1;
            }
            number = number*10 + v[i];
        }
        return number;
    }
};
