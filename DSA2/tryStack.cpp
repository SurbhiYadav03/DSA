#include<iostream>
using namespace std;

class Stack{
    public:
    int top;
    int size;
    int *arr;

    Stack(int size){
        this->top=-1;
        this->size=size;
        this->arr = new int[size];
    }

    void push(int data)
    {
        if(top<size){
            top++;
            arr[top]=data;
        }
        else{
            cout<<"Overflow";
        }
    }
    void peek()
    {
        cout<<arr[top];
    }
    void pop()
    {
        if(top==-1){
            cout<<"Underflow"<<endl;
        }
        else{
            cout<<"Popped element="<<arr[top];
            top--;
        }
    }
    
};
int main()
{
    int size,data,n;
    cin>>size;
    Stack s(size);

    s.push(100);
    s.peek();
    s.push(400);
    s.peek();
    
    return 0;
}