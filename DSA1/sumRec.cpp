#include<iostream>
using namespace std;

int Add(int arr[],int n)
{
    if(n==0){
        return 0;
    }
    if(n==1){
        return arr[0];
    }
       
    int sum = arr[0] + Add(arr+1,n-1);
    return sum;
}
int main()
{
    int n=6;
    int arr[] = {3,2,5,1,6,7};
    cout<<Add(arr,n);
    return 0;
}