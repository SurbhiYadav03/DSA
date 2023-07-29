#include<iostream>
#include<string>
using namespace std;

char occurence(string &str){
    int arr[26]={0};
    int number=0;
    //assuming str has lower case char only
    for(int i=0;i<str.length();i++){
            number=str[i]-'a';        

        arr[number]++;
    }

    int max=-1;
    int tempAns=0;
    for(int i=0;i<26;i++){
        if(arr[i]>max){
            max=arr[i];
            tempAns=i;
        }
    }

    return (tempAns+'a');
}

int main()
{
    string str;
    cin>>str;
    cout<<occurence(str);
    return 0;
}