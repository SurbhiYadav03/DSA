#include<iostream>
using namespace std;

int bin(int a,int b)
{
    int count_a=0;
    int count_b=0;

    while(a!=0)
    {
        if(a&1){
        count_a++;
        a=a>>1;
       }
    }
    while(b!=0)
    {
        if(b&1){
        count_b++;
        b=b>>1;
      }

    }    
    return (count_a + count_b);

}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<bin(a,b);
    return 0;
}