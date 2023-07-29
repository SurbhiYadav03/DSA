#include<iostream>
#include<array>
using namespace std;

int linearSearch(int *arr,int key)
{
    for(int i=0 ; i<5 ; i++)
    {
        if(arr[i]==key)
        return i;
    }
 return -1;
}

int main()
{
    int arr[] = {1,2,3,43,4};
    int key;
    cout<<"Enter key:";
    cin>>key;
    int index=linearSearch(arr,key);
    cout<<"Element found at index:"<<index;
    return 0;

}