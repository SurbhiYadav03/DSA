#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter size:\n";
    cin>>n;
    int arr[n];
    cout<<"Enter elements:\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enter key:\n";
    cin>>key;
    cout<<"Elements before:\n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    //insertion
    arr[n]=key;
    n=n+1;
    
    cout<<"Elements after:\n";

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }


    return 0;
}