#include<iostream>
using namespace std;

bool isPrime(int n)
{
    if(n<=1){  //boundary case
        return false;
    }

    for(int i=2;i<=n-1;i++)
    {
        if(n%i==0)
        {
            return false;
        }

    }
    return true;
}

int main()
{
    int n,x;
    cin>>n;
    
    int ans=isPrime(n);

    if(ans==true){
        cout<<"prime";
    }
    else{
        cout<<"not prime";
    }
    
    return 0;
}

//optimized ==> sieve of eratosthenes