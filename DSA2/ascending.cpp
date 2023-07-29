#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a<b && a<c){
        cout<<a<<" ";
        if(b<c){
            cout<<b<<" ";
        }
        else{
            cout<<c<<" ";
        }
    }
    if(b<a && b<c){
        cout<<b<<" ";
        if(a<c){
            cout<<a<<" ";
        }else{
            cout<<c<<" ";
        }
    }
    if(c<a && c<b){
        cout<<c<<" ";
        if(b<a){
            cout<<b<<" ";
        }
        else{
            cout<<a<<" ";
        }
    }
    return 0;
}