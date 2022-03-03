//problem statement - https://www.geeksforgeeks.org/ceiling-in-a-sorted-array/
#include <bits/stdc++.h>
using namespace std;

/* Function to get index of
ceiling of x in arr[low..high]*/
int ceilSearch(int arr[], int low, int high, int x)
{
    int ans = -1;
	while(low<=high){
		int mid = low+(high-low)/2;
		if(arr[mid] == x){
			return mid;
		}
		else if(arr[mid]<x){
			low = mid+1;
		}
		else if(arr[mid]>x){
			ans = mid;
			high = mid-1;
		}
	}  
	return ans;	
}

// Driver Code
int main()
{
	int arr[] = {1, 2, 8, 10, 10, 12, 19};
	int n = sizeof(arr) / sizeof(arr[0]);
	int x = 3;
	int index = ceilSearch(arr, 0, n-1, x);
	if(index == -1)
		cout << "Ceiling of " << x
			<< " doesn't exist in array ";
	else
		cout << "ceiling of " << x
			<< " is " << arr[index];
	
	return 0;
}

// This code is contributed by rathbhupendra

