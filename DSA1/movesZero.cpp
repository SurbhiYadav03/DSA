#include<iostream>
#include<vector>
using namespace std;

void moveZeros(vector<int> &arr)
{
    int i=0;
    for(int j=0;j<arr.size();j++)
    {
        if(arr[j]!=0){
            swap(arr[j],arr[i]);
            i++;
        }
    }

    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}

int main()
{
    vector <int> arr = {1,0,2,3};
    moveZeros(arr);
    return 0;
}