class Solution {
public:
    string decodeString(string s) {
       stack<char> keeper;
        
       for(int i = 0;i<s.size();i++){
            if(s[i]!=']'){
                 keeper.push(s[i]);
            }
            else{
                string temp = "";
                while(keeper.top()!='['){
                    temp = keeper.top()+temp;
                    keeper.pop();
                }
                keeper.pop();
                string temp_num = "";
                while(!keeper.empty() && isdigit(keeper.top())){
                    temp_num = keeper.top()+temp_num;
                    keeper.pop();
                }
                int num = stoi(temp_num);
                
                while(num--){
                 for(int i = 0;i<temp.size();i++){
                   keeper.push(temp[i]);
                  }
                }
            }
       }
        s = "";
        while(!keeper.empty()){
            s = keeper.top()+s;
            keeper.pop();
        }
        return s;
    }
};
