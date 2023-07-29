#include<iostream>
using namespace std;

void selection(int *arr,int n)
{
    
    int min=0;

    for(int i=1;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
            min=j;
        }

    }
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<;i++)
    {
        cin>>arr[i];
    }
    selection(arr,n);
    return 0;
}