class Solution{
public:
    int solve(int arr[], int n, int k, int l, int mid, int r){
        mid = (l+r)/2;
        if(l>r){
            return -1;
        }
        if(arr[mid] == k){
            return mid;
        }
        if(arr[mid]>k){
            return solve(arr,n,k,l,mid,mid-1);
        }
        if(arr[mid]<k){
             return solve(arr,n,k,mid+1,mid,r);
        }
    }
    
    int binarysearch(int arr[], int n, int k){
       int l = 0, r = n-1;
       int mid = (l+r)/2;
       return solve(arr,n,k,l,mid,r);
    }
};
