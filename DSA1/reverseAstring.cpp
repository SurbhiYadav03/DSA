#include<iostream>
#include<vector>
using namespace std;

int strLen(char name[])
{
    int count=0;
    int i=0;
    while(name[i]!='\0'){
        count++;
        i++;
    }
    return count;

}
void reverse(char v[],int n)
{
    int i=0,e=n-1;
    while(i<e)
    {
        swap(v[i],v[e]);
        i++;e--;
    }
}
int main()
{
     char a[]={'s','u','\0','r'};
    string str={'s','u','\0','r','b','\0','h','i'};
    cout<<a<<" ";
    cout<<str<<" ";
    
    char name[10];
    cin>>name;
    int len = strLen(name);
    reverse(name,len);
    cout<<name;
    return 0;
}