#include<iostream>
#include<math.h>
using namespace std;

int binToDec(int n)
{
    int i=0,ans=0;
    while(n!=0)
    {
        // int bit=n%10;
        // if(bit==1)
        // ans = ans + (pow(2,i) );
        // n=n/10;
        // i++;
        ans = ans + ((n%10) * pow(2,i));
        n=n/10;
        i++;
    }
    return ans;
}

int main()
{
    int n;
    cin>>n;
    cout<<binToDec(n);
    return 0;
}