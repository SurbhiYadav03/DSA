#include<iostream>
using namespace std;

void removeOcc(string &s,string part){
    //inbuilt function --> find and erase
    while( s.length() != 0  && s.find(part) < s.length() ){
          s.erase(s.find(part),part.length());  //(part to erase, length upto where)
    }
}
int main()
{
    string s = "My name is name and name me name";
    removeOcc(s,"am");
    cout<<s;
    return 0;
}