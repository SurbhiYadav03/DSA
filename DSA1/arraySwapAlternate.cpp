#include<iostream>
using namespace std;
int* altSwap(int arr[],int n)
{
    // for(int i=0;i<n;i++)
    // {
    //     if((i+1)<n)
    //     {
    //         swap(arr[i],arr[i+1]);
    //         i++;
    //     }
    // }

    int s=0,e=s+1;
    while(e<n-1)
    { 
        swap(arr[s],arr[e]);
        s=e+1;
        e=s+1;

    }

    return arr;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    altSwap(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}