#include<iostream>
using namespace std;

void swap(int &a, int &b){
    int temp;
   temp=a;
    a=b;
    b=temp;
    
}
int main() {
    int arr[] = {1,2,3,7,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int min;
    int temp;
    for(int i=0;i<n-1;i++){
        min = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min = j;
            }
        }
        swap(arr[i],arr[min]);
    }
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
