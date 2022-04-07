// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
    static bool compare(string &s1, string &s2){
        return s1.size()<s2.size();
    }
public:
    string LCP(string ar[], int n)
    {
        if(n == 1){
            return ar[0];
        }
        sort(ar,ar+n,compare);
        int count = ar[0].size();
        string pre = ar[0];
        string prefix = "";
        for(int i = 1;i<n;i++){
            prefix = "";
            for(int j = 0;j<count;j++){
                if(pre[j] == ar[i][j]){
                    prefix+=pre[j];
                }
                else{
                    break;
                }
            }
             count = prefix.size();
             pre = prefix;
        }
        if(prefix == ""){
            return "-1";
        }
        return prefix;
    }
};

// { Driver Code Starts.

int main() 
{

	int t;
	cin>>t;
	while(t--)
	    {
	        int n;
	        cin>>n;
	        string arr[n];
	        for(int i = 0;i<n;i++)
	            cin>>arr[i];
	        Solution ob;
	        cout<<ob.LCP(arr,n)<<endl;
	    }
	return 0;
}  // } Driver Code Ends
