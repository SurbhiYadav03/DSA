#include<iostream>
using namespace std;
int bitCount(int bin)
{
    cout<<bin<<"\n";
    int count=0;
    while(bin!=0)
    {
        if(bin&1)
        // if(bin%10==1)
        count++;
        // bin=bin>>1;
         bin=bin/10;
    }

    return count;
}
int main()
{
    unsigned int bin;
    cin>>bin;
    int a[32];
    // int i=0,bin=0;
    // while(n!=0)
    // {
    //     a[i]=n%2;
    //     n=n/2;
    //     i++;
        
    // }
    // for(int j=i-1;j>=0;j--)
    // {
    //     bin=(bin*10)+(a[j]);
    // }

    cout<<bitCount(bin);
    return 0;
}