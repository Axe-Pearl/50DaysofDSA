// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int* greaterElement(int arr[], int n);

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int *b;
        b = greaterElement(arr, n);
        for(int i=0;i<n;i++){
            if(b[i] == -10000000)
                cout << "_ ";
            else
                cout << b[i] << " ";
        }
        cout<<endl;   
        
    }
    return 0;
}
// } Driver Code Ends

bool sortbysec(const pair<int,int>&a, const pair<int,int>&b){
    return(a.second<b.second);
}
int* greaterElement(int arr[], int n)
{
    vector<pair<int,int> >v;
    for(int i = 0;i<n;i++){
        v.push_back(make_pair(i,arr[i]));
    }
    sort(v.begin(),v.end(),sortbysec);
    sort(arr,arr+n);
    int temp = -10000000;
    for(int i = n-1;i>0;i--){
       if(arr[i-1]<arr[i]){
           v[i-1].second = arr[i];
           temp = arr[i];
       }
       else{
           v[i-1].second = temp;
       }
    }
    v[v.size()-1].second =  -10000000;
    sort(v.begin(),v.end());
    for(int i = 0;i<n;i++){
        arr[i] = v[i].second;
    }
    return arr;
}

