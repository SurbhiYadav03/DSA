#include <iostream>
#include<bits/stdc++.h>
#include <string>
using namespace std;

string StringChallenge(string strArr[], int arrLength) {
  
  // code goes here  
  int len = stoi(strArr[1]);
  string s = strArr[0];
  int itera = ((len-1)*2);
  string result = "";
  for(int i=0;i<strArr[0].length()/2;i++){
    if(itera==0)
      itera = ((len-1)*2);
    if(itera>0)
      for(int j=i;j<strArr[0].length();j+=itera)
        result+=s[j];
    if(result.length()==s.length())
      break;
    itera-=2;
  }
  strArr[0] = result;
  return strArr[0];

}

int main(void) { 
   
  // keep this function call here
  string A[] = {"catar","3"};
  int arrLength = sizeof(A) / sizeof(*A);
  cout << StringChallenge(A, arrLength);
  return 0;
    
}