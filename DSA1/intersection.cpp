#include<iostream>
using namespace std;

void intersection(int *arr1,int *arr2)
{
    for(int i=0;i<sizeof(arr1);i++)
    {
        for(int j=0;j<sizeof(arr2);j++){
            if(arr1[i]==arr2[j])
            {
                cout<<arr1[i]<<" ";
                break;
            }
            
        }
    }
}

int main()
{
    int n;
    cin>>n;
    int m;
    cin>>m;
    int arr1[n];
    int arr2[m];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    intersection(arr1,arr2);
    return 0;
}