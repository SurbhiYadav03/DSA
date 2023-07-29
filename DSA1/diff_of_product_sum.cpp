#include<iostream>
using namespace std;
int main()
{
    int n,sum=0,prod=1;
    cin>>n;
    while(n!=0)
    {
        sum=sum+(n%10);
        prod=prod*(n%10);
        n=n/10;

    }
    cout<<(prod-sum);
    return 0;
}