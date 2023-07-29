#include<iostream>
using namespace std;

bool search(int arr[],int n,int key){
    if(n==0)
    return false;

    if(arr[0]==key)
    return true;

    else
    return search(arr+1,n-1,key);
}
int main()
{
    int n=5;
    int arr[] = {1,4,2,19,2};
    int key=19;
    cout<<search(arr,n,key);
    return 0;
}