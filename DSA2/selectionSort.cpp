#include<iostream>
using namespace std;

void selectionSort(int *arr , int n)
{
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[i])
            {
                swap(arr[i],arr[j]);
            }
        }
    }
}
int main()
{
    int n;
    cin>>n;

    int arr[]={12,45,5,2,23};
    selectionSort(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}