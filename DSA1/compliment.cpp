#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int m = n;
    int mask = 0 ;

    if(n==0)   //edge case
    return 1;

    while(m!=0)
    {
       mask = (mask<<1) | 1 ;  //creating mask
       m = m>>1 ;
    }

    int ans = (~n) & mask ;
    cout<<ans;

    return 0;
}

// n=5 --> 000..0101 , ~n= 111..010 -->2
// create a mask=0000...111  
// mask & (~n) = (000....111) & (111..010) = 000000 ... 010  = 2 ---> ans

//how to create mask  
//take mask = 0 (000....000) 
//left shift mask and or with 1 to add the desired 1's at end --> (mask << 1) | 1  (while n != 0)