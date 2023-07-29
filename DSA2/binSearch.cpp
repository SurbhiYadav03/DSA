#include<iostream>
using namespace std;

int binSearch(int *arr,int key,int n)
{
    int s=0,e=n-1;

    while(s<e)
    {
        int mid= (s+e)/2;
        if(arr[mid]==key)
        return mid;
        else if(key<arr[mid])
        e=mid-1;
        else
        s=mid+1;
    }
    return -1;
}
int main()
{
    int n;
    cin>>n;
    int arr[]={10,234,3,21,1};
    int key;
    cin>>key;
    cout<<"Element found at:"<<binSearch(arr,key,n);
    return 0;
}