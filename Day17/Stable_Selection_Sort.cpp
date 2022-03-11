#include<iostream>
using namespace std;

int main() {
    int arr[] = {5,2,8,5,1};
    int min;
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n-1;i++){
        min = i;
        for(int j=i+1;j<n;j++){
            if(arr[min]>arr[j]){
                min=j;
            }
        }
        int key = arr[min];
        while(min>i){
            arr[min]=arr[min-1];
            min--;
        }
        arr[i]=key;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
