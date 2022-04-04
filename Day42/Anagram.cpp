// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b){
       if(a.size()!=b.size()){
           return false;
       }
       int alpha1[26] = {0};
       int alpha2[26] = {0};
       for(int i = 0;i<a.size();i++){
           alpha1[a[i]-'a']++;
           alpha2[b[i]-'a']++;
       }
       for(int i = 0;i<a.size();i++){
           if(alpha1[a[i]-'a'] != alpha2[a[i]-'a']){
               return false;
           }
       }
       return true;
    }

};

// { Driver Code Starts.

int main() {
    
    int t;

    cin >> t;

    while(t--){
        string c, d;

        cin >> c >> d;
        Solution obj;
        if(obj.isAnagram(c, d)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

}
  // } Driver Code Ends
