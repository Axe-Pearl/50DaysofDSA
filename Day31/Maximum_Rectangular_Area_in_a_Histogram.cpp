//https://practice.geeksforgeeks.org/problems/maximum-rectangular-area-in-a-histogram-1587115620/1#

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find largest rectangular area possible in a given histogram.
    long long getMaxArea(long long arr[], int n)
    {
       vector<long long> left;
       vector<long long>right;
       stack<int> stk1;
       stack<int> stk2;
       long long maxArea = LLONG_MIN;
       //left
       for(int i = 0;i<n;i++){
           while(!stk1.empty() && arr[stk1.top()]>=arr[i]){
               stk1.pop();
           }
           if(stk1.empty()){
              left.push_back(-1);
           }
           else{
               left.push_back(stk1.top());
           }
           stk1.push(i);
       }
       //right
       for(int i = n-1;i>=0;i--){
            while(!stk2.empty() && arr[stk2.top()]>=arr[i]){
               stk2.pop();
           }
           if(stk2.empty()){
              right.push_back(n);
           }
           else{
               right.push_back(stk2.top());
           }
           stk2.push(i);
       }
      reverse(right.begin(),right.end());
       for(int i = 0;i<n;i++){
          long long  width =  right[i]-left[i]-1;
          long long area = width*arr[i];
          if(maxArea<area){
              maxArea = area;
          }
       }
       return maxArea;
    }
};


// { Driver Code Starts.

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.getMaxArea(arr, n)<<endl;
    
    }
	return 0;
}
  // } Driver Code Ends
