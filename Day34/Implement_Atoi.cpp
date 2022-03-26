//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string str) {
        int x = 0;
        int sign = 1;
        for(int i=0;i<str.length();i++){
            if(str[i]=='-'){
                sign = -1;
                continue;
            }
            if(str[i]>='0' && str[i]<='9'){
            x = x*10+int(str[i]) - 48;
            }
            else{
                return -1;
            }
        }
        return sign*x;
    }
};

// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.atoi(s)<<endl;
	}
}  // } Driver Code Ends
