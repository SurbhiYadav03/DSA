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

    //deletion
    int target=0,i=0;
    for( i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
         target=i;  
         break;  
        }
        else {
            target=-1;
        }
    }

    if(target == -1)
    {
        cout<<"Element not found"<<endl;
         
    }
    else
    {
        for(i=target;i<n;i++)
         {
             arr[i]=arr[i+1];
         }
         n--;
        
    }
    
    cout<<"Elements at end:\n";

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }


    return 0;
}