#include<iostream>
using namespace std;

void merge(int arr1[] , int n , int arr2[] , int m, int arr3[])
{
    int i=0, j =0 ,k =0;
    while(i<n && j<m)
    {
        if(arr1[i]<arr2[j]){
            arr3[k]=arr1[i];
            k++;i++;
        }
        else
        {
            arr3[k]=arr2[j];
            k++;j++;
        }
    }

   while(i<n){
    arr3[k]=arr1[i];
    k++;i++;
   }

   while(j<m){
    arr3[k]=arr2[j];
    k++;j++;
   }

}

void print(int arr[], int k)
{
    for(int i=0;i<k;i++){
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr1[5] = {1,2,3,4,5};
    int arr2[2] = {0,10};
    int arr3[7] = {0};

    merge(arr1,5,arr2,2,arr3);
    print(arr3,7);
    return 0;
}