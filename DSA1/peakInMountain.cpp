#include<iostream>
using namespace std;

int peak(int* arr , int n)
{
    int s=0,e=n-1;
    int mid=s+(e-s)/2;

    while(s<e)
    {
        if(arr[mid]<arr[mid+1]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;
}


int main()
{
    int arr[] = {0,5,7,10,5,2,1};
    cout<<peak(arr,7);
    return 0;
}