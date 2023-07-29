#include<iostream>
using namespace std;

int pivot(int arr[],int n)
{
    int s=0,e=n-1,mid;
    while(s<e)
    {
        mid=s+(e-s)/2;
        if(arr[mid]>=arr[0])
        {
            s=mid+1;
        }
        else
        {
            e=mid;
        }   

    }
     return e;
}

int main()
{
    int arr[5]={8,10,17,1,3};   //pivot=1 -->min element (ans=3)
    cout<<"Pivot index:"<<pivot(arr,5);
    return 0;
}