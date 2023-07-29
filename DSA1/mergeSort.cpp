#include<iostream>
using namespace std;

void merge(int arr[],int s,int e)
{
    int mid = (s+(e-s)/2);

    int len1 = mid-s+1;
    int len2 = e-mid;

    int* arr1 = new int[len1];
    int* arr2= new int[len2];
    
    int mainArrayindex = s;
    //copying values in divided arrays --> 1st array
    for(int i=0;i<len1;i++)
    {
        arr1[i] = arr[mainArrayindex++];
    }
   
    mainArrayindex = mid+1;
    //2nd array
    for(int i=0;i<len2;i++)
    {
        arr2[i] = arr[mainArrayindex++];
    }

    //merge the two arrays
    int index1 = 0;
    int index2 = 0;
    
    mainArrayindex = s;
    while( index1<len1 && index2<len2)
    {
        if( arr1[index1] < arr2[index2] ){
            arr[mainArrayindex++] = arr1[index1++];
        }
        else{
            arr[mainArrayindex++] = arr2[index2++];
        }
    }
    
    //larger remaining array of the 2 (either this)
    while(index1 < len1){
         arr[mainArrayindex++] = arr1[index1++];
    }
    //(or this)
    while(index2 < len2){
         arr[mainArrayindex++] = arr2[index2++];
    }
   
    delete[] arr1;
    delete[] arr2;
}

void mergeSort(int arr[],int s,int e)
{
    if(s>=e){
        return ;
    }

    int mid=(s+(e-s)/2);

    //sort left part
    mergeSort(arr,s,mid);

    //sort right part
    mergeSort(arr,mid+1,e);

    //merge sorted arrays
    merge(arr,s,e);
}

int main()
{
    int n=12;
    int arr[] = {10,3,1,4,7,5667,2,1,2233,1,89,8};
    mergeSort(arr,0,n-1);
    for(int i=0 ;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}