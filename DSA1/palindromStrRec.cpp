#include<iostream>
using namespace std;

bool palindrome(string str,int i,int j){
    if(i>j)
    return true;

    if(str[i]!=str[j]){
    return false;
    }
    else
    {
        return palindrome(str,i+1,j-1);
    }
}

int main()
{
    string str;
    cin>>str;
    int i=0,j=str.length()-1;
    cout<<palindrome(str,i,j);
    return 0;
}

//use str.length()-1-i for single pointer