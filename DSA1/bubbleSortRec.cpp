#include<iostream>
using namespace std;

void sortArr(int arr[], int n)
{
    if(n==0 || n==1){
        return;
    }
   
    for(int i=0;i<n-1;i++){
            if(arr[i]>arr[i+1]){
                swap(arr[i],arr[i+1]);
            }
        }
    
    return sortArr(arr,n-1);
}
int main()
{
    int arr[5] = {2,3,4,6,9};
    sortArr(arr,5);

    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}