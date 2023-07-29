#include<iostream>
#include<vector>
using namespace std;

// void reverseArray(int arr[],int n)
// {
//     int s=0,e=n-1;
//     while(s<=e)
//     {
//         swap(arr[s],arr[e]);
//         s++;e--;
//     }
//     for(int i=0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
// }
// int main()
// {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     reverseArray(arr,n);
//     return 0;
// }



void reverse (vector <int> &v,int index)
{
    //reversing elements after a given index
    
    int s=index+1,e=v.size()-1;
    while(s<=e)
    {
        swap(v[s],v[e]);
        s++;e--;
    }
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}

int main()
{
    int index;
    cin>>index;

    vector <int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);

    reverse(v,index);
    return 0;
}