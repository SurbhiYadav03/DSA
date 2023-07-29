#include<iostream>
using namespace std;

bool isSorted(int arr[],int n)
{
    if(n==0 || n==1)
        return true;

    if(arr[0]>arr[1])
        return false;
    
    else
        return isSorted(arr+1,n-1);
}

int main()
{
    int n;
    cin>>n;
    int arr1[] = {1,2,3,4,5,6};
    int arr2[] = {15,6,1,2,3,4};
    cout<<isSorted(arr1,n)<<" ";
    cout<<isSorted(arr2,n);
    return 0;
}