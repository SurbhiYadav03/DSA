//replace the spaces by "@40"

#include<iostream>
#include<string>
using namespace std;

string replace(string &str)
{
    string temp=" ";
    for(int i=0;i<str.length();i++){
        if(str[i]==' '){
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }
        else{
            temp.push_back(str[i]);
        }
    }
    return temp;
}

int main()
{
    string s;
    getline(cin,s);
    cout<<replace(s);
    return 0;
}