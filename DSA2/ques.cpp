#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    string series = "aabbaaa";
    unordered_map<char,int>m;
    int count=0;
    for(int i=0;i<series.length();i++)
    {
        m[series[i]]++;
    }
    for(auto i:m){
        count++;
    }

    return count;
}