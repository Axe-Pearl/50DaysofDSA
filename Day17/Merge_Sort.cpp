#include<iostream>
using namespace std;

void merge(int arr[],int l, int mid, int r){
    int i = l, j=mid+1, index = l;
    int res[5];
    while(i<=mid && j<=r){
        if(arr[i]<arr[j]){
            res[index] = arr[i];
            i++;
        }
        else{
            res[index] = arr[j];
            j++;
        }
        index++;
    }
    if(i>mid){
        while(j<=r){
            res[index] = arr[j];
            j++;
            index++;
        }
    }
    else{
        while(i<=mid){
            res[index] = arr[i];
            i++;
            index++;
        }
    }
    int k = l;
    while(k<index){
        arr[k] = res[k];
        k++;
    }
}

void mergesort(int arr[],int l, int r){
    if(l<r){
     int mid = (l+r)/2;
    mergesort(arr,l,mid);
    mergesort(arr,mid+1,r);
    merge(arr,l,mid,r);
    }
}

int main() {
    int arr[5] = {5,1,3,2,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Before Sorting: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    mergesort(arr,0,n-1);
    cout<<"\nAfter Sorting:\n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
