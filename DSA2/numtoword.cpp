#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    string arr[] = {" ","one","two","three","four","five","six","seven","eight","nine"};
    string tens[] = {" ","ten","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
    cout<<arr[n/1000]<<" thousand "<<arr[(n%1000)/100]<<" hundred";
    n=n%100;
    if(n%10==0){
        cout<<" "<<tens[n/10];
    }
    else{
        cout<<" "<<tens[n/10]<<" "<<arr[n%10];
    }
    return 0;
}