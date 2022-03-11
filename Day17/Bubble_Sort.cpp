#include<iostream>
using namespace std;

int main() {
    int arr[] = {5,4,2,1,6,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j+1]<arr[j]){
                arr[j+1] = arr[j+1]+arr[j];
                arr[j]=arr[j+1]-arr[j];
                arr[j+1] = arr[j+1]-arr[j];
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
