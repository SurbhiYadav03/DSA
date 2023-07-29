#include<iostream>
using namespace std;

int binSearch(int arr[],int key,int s,int e)
{
    int mid = s+(e-s)/2;
    if(s>e){
        return -1;
    }
    if(arr[mid]==key){
        return mid;
    }
    if(key<arr[mid]){
        return binSearch(arr,key,s,mid-1);
    }
    else{
        return binSearch(arr,key,mid+1,e);
    }
}
int main()
{
    int n=6;
    int arr[]={1,2,3,4,5,6};
    int key=4;
    int s=0,e=n-1;
    cout<<binSearch(arr,key,s,e);
    return 0;
}