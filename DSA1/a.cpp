#include<iostream>
using namespace std;
int main()
{
    cout<<(0^0)<<endl;
    cout<<(0^1)<<endl;
    cout<<(1^0)<<endl;
    cout<<(1^1)<<endl;
    cout<<(1^2)<<endl;

    int arr[10]={0};
    cout<<&arr<<endl;
    cout<<arr<<endl;
    cout<<&arr[0]<<endl;
    cout<<*arr<<endl;
    return 0;
}