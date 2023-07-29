#include<iostream>
using namespace std;

bool ispossible(int *arr,int m,int mid,int n)
{
    int stuCount=1;
    int pageSum=0;

    for(int i=0;i<n;i++)
    {
        if(pageSum+arr[i]<=mid)
        {
            pageSum+=arr[i];
        }
        else
        {
            stuCount++;
            if(stuCount>m || arr[i]>mid){
            return false;
            }
            else{
                pageSum=0;
                pageSum+=arr[i];
            }
            
        }
    }
    return true;
}

int allocateBooks(int *arr,int n,int m)
{
    int s=0,sum=0,ans=-1;
    int mid;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    } 
    int e=sum;

    while(s<=e)
    {
        mid=s+(e-s)/2;
        if(ispossible(arr,m,mid,n))
        {
            ans=mid;
            e=mid-1;
    
        }
        else
        {
            s=mid+1;
        }
    }
    return ans;
}

int main()
{
    int arr[4]={10,20,30,40};
    int n=4,m=2;
    cout<<allocateBooks(arr,n,m);
    return 0;
}