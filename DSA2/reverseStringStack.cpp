#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<char> s;
    string str="Surbhi";
    cout<<str<<endl;
    for(int i=0;i<str.length();i++){
        s.push(str[i]);
    }
    string ans="";
    while(!s.empty()){
        ans.push_back(s.top());
        s.pop();
    }
    cout<<ans;
    return 0;
}