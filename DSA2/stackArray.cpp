#include<iostream>
using namespace std;

class Stack{
    public:
    int data;
    int *arr;
    int size;
    int top;

    Stack(int size){
        this->size=size;
        arr=new int[size];
        top=-1;
    }

    void push(int data)
    {
        if(top==size){
            cout<<"Overflow"<<endl;
        }
        else{
            top++;
            arr[top]=data;
            cout<<data<<" is pushed to stack"<<endl;
        }
        display();
    }

    void pop()
    {
        if(top==-1){
            cout<<"Underflow"<<endl;
        }
        else{
            int ele = arr[top];
            cout<<"Popped element-"<<ele<<endl;
            top--;
        }
        display();
    }

    void peek()
    {
        if(top!=-1){
            cout<<arr[top]<<endl;
        }
        else{
            cout<<"Stack is empty"<<endl;
        }
    }
    void display()
    {
        if(top==-1){
            cout<<"Stack is empty"<<endl;
        }
        else{
            cout<<"Current stack:"<<endl;
            for(int i=0;i<=top;i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
    }
};
int main()
{
    Stack s(5);
    s.push(100);
    s.push(200);
    s.pop();
    s.pop();
    s.pop();
    return 0;
}