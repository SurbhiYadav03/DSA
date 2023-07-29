#include<iostream>
using namespace std;

//1st we'll search pivot element then apply binary search on one line based on pivot condition

int getPivot(int arr[],int n)  
{
    int s=0,e=n-1,mid;
    while(s<e)
    {
        mid=s+(e-s)/2;
        if(arr[mid]>=arr[0])
        {
            s=mid+1;
        }
        else
        {
            e=mid;
        }   

    }
     return s;
}

int binSearch(int arr[],int start, int end,int k)
{
      int s=start;
      int e=end;
      int mid;
      while(s<=e)
      {
        mid=s+(e-s/2);

        if(k==arr[mid])
           return mid;
        
        if(k>arr[mid])
            s=mid+1;
        else
            e=mid-1;
        
      }
      return -1;
}

int search(int arr[],int n,int k)
{
    int pivot=getPivot(arr,n);

    if(k>=arr[pivot] && k <= arr[n-1]) //2nd line
    {
        return binSearch(arr,pivot,n-1,k);
    }

    else
    {
        return binSearch(arr,0,pivot-1,k); //1st line
    }
}
int main()
{
    int arr[]={8,10,17,1,3};   
    int k=3;
    cout<<"Element is at index:"<<search(arr,6,k);
    return 0;
}