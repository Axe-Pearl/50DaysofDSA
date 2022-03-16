// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int isPossible (string s);

int main()
{
    int t; cin >> t;
    while (t--)
	{
		string s; cin >> s;
		if (isPossible (s))
			cout << "Yes\n";
		else
			cout << "No\n";
	}
}

// Contributed By: Pranay Bansal
// } Driver Code Ends


int isPossible (string S)
{
   int alpha[26] = {0};
   int odd = 0;
   
   for(int i = 0;i<S.length();i++){
       alpha[S[i]-'a']++;
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
