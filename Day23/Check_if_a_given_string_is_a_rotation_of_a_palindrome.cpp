// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:
	
	int isRotatedPalindrome(string s)
	{
	   int alpha[26] = {0};
	   int odd = 0;
	   
	   for(int i = 0;i<s.length();i++){
	       alpha[s[i]-'a']++;
	   }
	   
	   for(int i = 0;i<26;i++){
	       if(alpha[i]%2!=0){
	           odd++;
	       }
	       if(odd>1){
	           return 0;
	       }
	   }
	   return 1;
	}
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while (t--) {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.isRotatedPalindrome(s)<<endl;
    }
    return 0;
}  // } Driver Code Ends
