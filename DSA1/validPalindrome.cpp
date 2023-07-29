#include<iostream>
using namespace std;

void valid(string &str, char ch){
    if(ch>='a'&& ch<='z' || ch>='A'&& ch<='Z' || ch>='0'&& ch<='9'){
         str.push_back(ch);
    }
}

char toLowerCase(char ch){
     if(ch>='a'&& ch<='z' || ch>='0'&& ch<='9'){
        return ch;
     }
     else{
        return (ch - 'A' + 'a');  //(e.g. if(ch='B') then B-A+a= 1+'a' = 'b')
     }
} 
bool checkPalindrome(string s){
    int i=0,j=s.length()-1;
    while(i<=j){
        if((s[i])==(s[j])){
            i++;j--;
        }
        else{
            return false;
        }
    }
    return true;
}
int main()
{
    string s ;
    getline(cin,s); //to take user input with spaces in between
    string str = "";

    //pushing string in valid format
    for(int i=0;i<s.length();i++){
        valid(str,s[i]);
    }

    //converting valid str to lowercase
    for(int i=0;i<str.length();i++){
    str[i]=toLowerCase(str[i]);       
    }
    cout<<str<<endl;

    //check palindrome
    cout<<checkPalindrome(str);
    return 0;
}