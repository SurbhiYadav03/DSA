#include<iostream>
using namespace std;

long long int sqrtbinSearch(int n)
{
    int s=0;int e=n;
    int mid;
    long long int ans=-1;

    while(s<=e)
    {
        mid=s+(e-s)/2;
        long long int sq=mid*mid;

        if(sq==n){
            ans = mid;
            return mid;
        }
        if(sq<n){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return ans;
}

double precise(int n,int p,int tempAns)
{
    double factor=1,ans=tempAns;

    for(int i=0;i<p;i++)
    {
        factor=factor/10;

        for(double j=ans; j*j<n; j=j+factor){
            ans=j;
        }
    }
    return ans;
}



int main()
{
    int num;
    cin>>num;
    int tempAns=sqrtbinSearch(num);
    cout<<precise(num,3,tempAns);
    return 0;
}