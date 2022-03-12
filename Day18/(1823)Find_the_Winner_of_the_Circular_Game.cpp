class Solution {
public:
    int findTheWinner(int n, int k) {
        vector<int>v(n);
        iota(v.begin(), v.end(), 1);
        // cout<<k<<endl;
        // for(int i=0;i<n;i++){
        //     cout<<v[i]<<" ";
        // }
        return findTheWinner(v,0,1,k);
    }
    int findTheWinner(vector<int> &v,int index,int counter,int k){
        if(v.size()==1){
            return v[0];
        }
        if(counter == k){
            v.erase(v.begin()+index);
            counter = 1;
            if(index == v.size()){
                index = 0;
            }
            return findTheWinner(v,index,counter,k);
        }
        if(index == v.size()-1){
            counter++;
            index=0;
            return findTheWinner(v,index,counter,k);
        }
         else{
             counter++;
             index++;
             return findTheWinner(v,index,counter,k);
        }
    }
};
