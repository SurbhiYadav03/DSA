#include<iostream>
using namespace std;

int findUnique(int *arr, int n)
{
    // int count,i;
    // for( i=0;i<n;i++)
    // {
    //     count=0;
    //     for(int j=0;j<n;j++){
    //         if(arr[j]==arr[i])
    //         count++;     
    //     }  
    //     if(count==1)
    //         return arr[i]; 
    // }

    int ans=0;
    for(int i=0;i<n;i++){
        ans=ans^arr[i];
    }
    return ans;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<findUnique(arr,n)<<" ";
    return 0;
}


