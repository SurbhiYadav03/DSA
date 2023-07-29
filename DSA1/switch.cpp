#include <iostream>
using namespace std;

int main()
{
    int num = 1330;
    int note;
    cin >> note;
    
    switch (note)
    {

    case 100:
        {
            cout<<"100rs.="<<num/100<<" notes.";
            num=num%100;
        }
    case 50:
        {
            cout<<"50rs.="<<num/50<<" notes.";
            num=num%50;


        }
    case 20:
        {
            cout<<"20rs.="<<num/20<<" notes.";
            num=num%20;


        }
    case 1:
        {
            cout<<"1rs.="<<num/1<<" notes.";
            num=num%1;

        }

        
    }
    return 0;
}