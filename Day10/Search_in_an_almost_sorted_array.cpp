//Problem statement - https://www.geeksforgeeks.org/search-almost-sorted-array/
#include <stdio.h>

int binarySearch(int arr[], int l, int r, int x)
{
    while(l<=r){
    	int m = l+(r-l)/2;
    	if(arr[m] == x){
    		return m;
		}
		else if(m>l && arr[m-1] == x){
			return (m-1);
		}
		else if(m<r && arr[m+1] == x){
			return (m+1);
		}
		else if(arr[m]<x){
			l = m+2;
		}
		else if(arr[m]>x){
			r = m-2;
		}
	}
	return -1;
}

// Driver Code
int main(void)
{
int arr[] = {3, 2, 10, 4, 40};
int n = sizeof(arr) / sizeof(arr[0]);
int x = 4;
int result = binarySearch(arr, 0, n - 1, x);
(result == -1) ? printf("Element is not present in array")
			: printf("Element is present at index %d",
						result);
return 0;
}

