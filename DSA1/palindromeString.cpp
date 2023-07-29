#include<iostream>
using namespace std;

bool palindrome(char str[],int n){
    int s=0,e=n-1;
    while(s<=e){
        if(str[s]==str[e]){
            s++;e--;
        }
        else{
            return 0;
        }
    }
    return true;
}
int strLen(char str[]){
    int count = 0;
    for(int i=0;str[i]!='\0';i++){
        count++;
    }
    return count;
}
int main()
{
    char str[10];
    cin>>str;
    int n = strLen(str);
    cout<<palindrome(str,n);
    return 0;
}