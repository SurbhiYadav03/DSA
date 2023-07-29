#include<iostream>
using namespace std;

void insertionSort(int *arr,int n)
{
    int i,j;
    
    for(int i=1;i<n;i++)
    {
        int temp=arr[i];

        while(j>=0 && arr[j] > temp)
        {
            
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1]=temp;

    }

}
int main()
{
    int n;
    cin>>n;

    int arr[] ={47,2,56,1,8};
    insertionSort(arr,n);
    
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}