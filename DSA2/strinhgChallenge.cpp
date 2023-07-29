#include<iostream>
using namespace std;
int main()
{
    string s = "cats800AND dogsFFFFbbcb aRE-++++AwesOme";
    string ans="";
    
    s[0]=toupper(s[0]);
    ans+=s[0];
    for(int i=1;i<s.length();i++){
        if(s[i]==32 || !((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))){
            i++;
            s[i]=toupper(s[i]);
            ans+=s[i];
            continue;
        }
        s[i]=tolower(s[i]);
        ans+=s[i];
    }
    cout<<ans;
    return 0;
}