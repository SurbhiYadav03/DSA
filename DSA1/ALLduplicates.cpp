#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void ALLduplicates(int *arr,int n)
{
    vector <int> v;

    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }

    for(int i=0;i<n-1;i++){
        if(arr[i]==arr[i+1])
        {
            v.push_back(arr[i]);
            i=i+2;
        }
        else{
            i++;
        }
    }

    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    ALLduplicates(arr,n);
    return 0;
}