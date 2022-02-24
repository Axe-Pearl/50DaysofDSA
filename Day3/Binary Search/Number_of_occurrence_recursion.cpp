// { Driver Code Starts


#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
 int solve(int arr[], int n, int x, int l, int m, int r, int res,string s){
      m = (l+r)/2;
      if(l>r){
          return res;
      }
      if(arr[m] == x){
          res = m;
          if(s == "f"){
              return solve(arr, n, x, l, m, m-1, res,s);
          }
          else{
              return solve(arr, n, x, m+1, m, r, res,s);
          }
      }
      else if(arr[m]<x){
          return solve(arr, n, x, m+1, m, r, res,s);
      }
      else if(arr[m]>x){
          return solve(arr, n, x, l, m, m-1, res,s);
      }
  }
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int count(int arr[], int n, int x) {
	   int l = 0, r = n-1;
	   int m = (l+r)/2;
	   int res = -1;
	   int f = solve(arr, n, x, l, m, r, res,"f");
	   int s = solve(arr, n, x, l, m, r, res,"s");
	   int ans = 0;
	   if(f!=-1 && s != -1){
	       ans = (s-f)+1;
	   }
	   return ans;
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        int ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends
