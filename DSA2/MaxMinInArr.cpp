#include<iostream>
using namespace std;
int main()
{
    int arr[]={11,0,200,34000,90};
    
    int max=INT32_MIN;
    int min=INT32_MAX;
    for(int i=0;i<5;i++)
    {
        if(arr[i]>max)
        max=arr[i];
        else
        if(arr[i]<min)
        min=arr[i];
    }
    cout<<max<<" "<<min;
    return 0;
}