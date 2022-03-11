#include<iostream>
using namespace std;

int main() {
   int arr[] = {3,1,5,8,7};
   int n = sizeof(arr)/sizeof(arr[0]);
   for(int i=1;i<n;i++){
       int j = i-1;
       int key = arr[i];
       while(j>=0 && key<arr[j]){
           arr[j+1]=arr[j];
           j--;
       }
       arr[j+1] = key;
   }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
