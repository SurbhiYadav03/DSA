#include<iostream>
using namespace std;


int main()
{
    int n,i;
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
    n++;
    for( i=n-1 ; i>=0 && key<arr[i] ; i--){
        arr[i+1]=arr[i];
    }
    arr[i+1]=key;

    cout<<"Elements after:\n";

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }


    return 0;
}