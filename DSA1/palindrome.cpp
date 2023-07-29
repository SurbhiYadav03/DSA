#include<iostream>
using namespace std;

int order(int n)
{
    int count=0;
    while(n!=0)
    {
        count++;
        n=n/10;
    }
    return count;
}

int rev(int n,int digits)
{
    int rev=0;
    for(int i=0;i<digits;i++){
        rev = (rev*10)+(n%10);
        n=n/10;
    }
    return rev;
}
int main()
{
    int n;
    cin>>n;

    int digits=order(n);
    int reverse = rev(n,digits);
    if(n==reverse)
    {
        cout<<"palindrome";
    }
    else{
        cout<<"not palindrome";
    }
    return 0;
}