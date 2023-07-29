#include<iostream>
using namespace std;
int main()
{
    int a=10,b=4;
    //bitwise operations

    //and
    cout<<(a&b)<<" "; //1010 & 0100
    //or
    cout<<(a|b)<<" "; //1010 | 0100
    //not
    cout<<(~a)<<" ";  // 1010 --> 111....0101 --> -(1's(11....0101))-->2's(-...1010)-->-1011--> -11
    //xor
    cout<<(a^b)<<" ";   
    //left shift
    cout<<(34<<1)<<" ";      
    cout<<(34<<2)<<" ";      
    //rightt shift
    cout<<(34>>1)<<" ";      
    cout<<(34>>2)<<" "; 

    cout<<(!a);

    return 0;
}
 
//5<<1 --> 0101<<1 --> ...1010 --> 10 (shifting by 1 bit)
//3<<2 --> 0011<<2  --> ...1100 --> 12 (shifting by 2 bits)