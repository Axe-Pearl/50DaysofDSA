// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
  int first(vector<int> &arr, int n, int x, int l,int m, int r, int resVar){
      while(l<=r){
          m = (l+r)/2;
          if(arr[m] == x){
              resVar = m;
              r = m-1;
          }
          else if(arr[m]<x){
              l = m+1;
          }
          else if(arr[m]>x){
              r = m-1;
          }
      }
      return resVar;
  }
   int last(vector<int> &arr, int n, int x, int l,int m, int r, int resVar){
      while(l<=r){
          m = (l+r)/2;
          if(arr[m] == x){
              resVar = m;
              l = m+1;
          }
          else if(arr[m]<x){
              l = m+1;
          }
          else if(arr[m]>x){
              r = m-1;
          }
      }
      return resVar;
  }
    vector<int> firstAndLast(vector<int> &arr, int n, int x) {
       vector<int> res;
       int resVar = -1;
       int l = 0, r = n-1;
       int m = (l+r)/2;
       int f = first(arr, n, x, l, m, r, resVar);
       int s = last(arr, n, x, l, m, r, resVar);
       if(f == -1 && s == -1){
           res.push_back(-1);
           return res;
       }
       res.push_back(f);
       res.push_back(s);
       return res;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        Solution obj;
        vector<int> ans= obj.firstAndLast(arr, n, x) ;
        for(int i = 0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<< endl;
    }
    return 0;
}
  // } Driver Code Ends
