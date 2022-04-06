// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// ranges[i][0] is the start of ith range
// ranges[i][1] is the end of ith range

class Solution{
public:
    static bool sortbysecond(vector<int> &a, vector<int> &b){
        return a[1]<b[1];
    }
    int max_non_overlapping( vector< vector<int> >& ranges )
    {
       sort(ranges.begin(),ranges.end(), sortbysecond);
       int count = 1;
       int lastCourse = ranges[0][1];
       for(int i = 1;i<ranges.size();i++){
          if(lastCourse <= ranges[i][0]){
              count++;
              lastCourse =  ranges[i][1];
          }
       }
       return count;
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

		vector< vector<int> > v(n,vector<int>(2));
		for(int i=0; i<n; i++)
			cin>> v[i][0] >> v[i][1];
			
        Solution ob;
		cout<< ob.max_non_overlapping(v) << endl;
	}
	return 1;
}

  // } Driver Code Ends
