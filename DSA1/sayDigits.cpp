#include<iostream>
using namespace std;

void sayDigits(int n,string arr[]){
    
    //base case
    if(n==0)
    return ;

    //processsing
    int digit = n%10;
    n=n/10;

    //recursive call
    sayDigits(n,arr);

    cout<<arr[digit]<<" ";
}
int main()
{
    string arr[] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    int n;
    cin>>n;
    sayDigits(n,arr);
    return 0;
}