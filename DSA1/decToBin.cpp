#include<iostream>
#include<math.h>
using namespace std;

int decToBin(int n)
{
    // int bin=0,i=0;
    // while(n!=0)
    // {
    //    //bin=(bin*10)+(n%2); n=n/2; ---> reverse it --> rev=(rev*10)+(bin%10);bin=bin/2
    //    or bin= bin + ( (n%2) * pow(10,i)) ;
    //    n=n>>1;
    //    i++;
    // }
    // return bin; 

    int arr[32],i=0,bin=0;
    while(n!=0)
    {
        arr[i]=n%2;
        n=n/2;
        i++;
    }
    int j=i-1;
    while(j>=0)
    {
        bin=(bin*10)+(arr[j]);
        j--;
    }
   
    return bin;


}

int main()
{
    int n;
    cin>>n;
    cout<<decToBin(n);
    return 0;
}

// 5-->101
// bin=1--> 1---> 101