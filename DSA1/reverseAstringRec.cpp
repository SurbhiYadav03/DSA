#include<iostream>
using namespace std;

void reverse(int i , int j , string &s)
{
    if(i>j)
    return;

    else
    {
    swap(s[i],s[j]);
    i++;j--;
    reverse(i,j,s);
    }
}
  
int main()
{
    string s;
    cin>>s;
    int i=0,j=s.length()-1;
    reverse(i,j,s);
    cout<<s;
    return 0;
}

//for increasing optimicity we can use single pointer instead of 2.
//make j in for of i ==> s.length()-1-i;  //use this instead of j