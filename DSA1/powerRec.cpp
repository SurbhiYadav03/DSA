#include<iostream>
using namespace std;

//a is number ,, b is power

int power(int a,int b)
{
    int ans = 1;

    if(b==0){
        return 1;
    }
    if(b==1){
        return a;
    }
   
    ans = power(a,b/2);   //ans = a ^ (b/2)

    if(b%2==0){
        return ans*ans;
    }
    else{
        return a*ans*ans;
    }
      
    
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<power(a,b);
    return 0;
}