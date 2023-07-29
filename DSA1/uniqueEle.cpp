#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int unique(int arr[],int n)
{
    int ans=0;
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    for(int i=0;i<n;i++)
    {
        if(arr[i]==arr[i+1]){
            i++;
        }
        else{
        ans=arr[i];
        }
    }
    return ans;
}

int main()
{
    int n;
    cout<<"Enter size:\n";
    cin>>n;

    int arr[n];
    cout<<"Enter elements:\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    cout<<unique(arr,n);

    return 0;
}