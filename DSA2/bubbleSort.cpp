#include<iostream>
using namespace std;

void bubbleSort(int *arr,int n)
{
    int count=1;
    while(count<n){
        for(int i=0;i<n-count ;i++)
        {
            if(arr[i]>arr[i+1]){
                swap(arr[i],arr[i+1]);    
            }
        }
         count++;
    }

    
}

int main()
{
    int n;
    cin>>n;

    int arr[] ={47,2,56,1,8};
    bubbleSort(arr,n);
    
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}