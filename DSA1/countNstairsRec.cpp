//count the no. of ways to reach the nth stair if the person can step out 1 step or 2 step 
#include<iostream>
using namespace std;

int countWays(int nStairs){
    if(nStairs<0)
    return 0;
    else if(nStairs==0)
    return 1;  //1 way to reach the same 0th stair
    else
    return ( countWays(nStairs-1) + countWays(nStairs-2)) ;
}
int main()
{
    int nStairs;
    cin>>nStairs;
    cout<<countWays(nStairs);
    return 0;
}