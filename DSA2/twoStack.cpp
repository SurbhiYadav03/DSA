//2 stacks using single array
#include<iostream>
#include<stack>
using namespace std;

class TStack
{
    public:
    int *arr;
    int size;
    int top1;
    int top2;

    TStack(int size){
        this->top1=-1;
        this->top2=size;
        this->size=size;
        this->arr = new int [size];
    }

    void push1(int data)
    {
        if (top2-top1>1)
        {
            top1++;
            arr[top1] = data;
        }
        else{
            cout<<"Overflow"<<endl;
        }
    }
    void push2(int data)
    {
        if (top2-top1>1)
        {
            top2--;
            arr[top2] = data;
        }
        else{
            cout<<"Overflow"<<endl;
        }
    }
    int pop1()
    {
        if(top1>-1){
           int ans = arr[top1];
           top1--;
           return ans;
        }
        else{
            cout<<"Underflow"<<endl;
            return -1;
        }
    }
    int pop2()
    {
        if(top2<size){
           int ans = arr[top2];
           top2++;
           return ans;
        }
        else{
            cout<<"Underflow"<<endl;
            return -1;
        }
    }

    void display1()
    {
        if(top1<-1)
        cout<<arr[top1]<<endl;
        else
        cout<<"Underflow";
    }
    void display2()
    {
        if(top2 < size)
        cout<<arr[top2]<<endl;
        else
        cout<<"Overflow";
    }

};
int main()
{
    // stack<int> s;
    TStack s(5);
    s.push1(10);
    s.push1(100);
    s.display1();
    s.pop1();
    s.display1();
    
    s.push2(1200);
    s.push2(200);
    s.display2();
    s.pop2();
    s.pop2();
    s.display2();
   
    return 0;
}