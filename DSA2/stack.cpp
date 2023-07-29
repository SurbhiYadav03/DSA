#include<iostream>
using namespace std;

class stack{

    public:
    int size;
    int top;
    int *arr;

    stack(int size)
    {
        this->size=size;
        this->arr = new int[size];
        this->top=-1;
    }
    
    void push(int data)
    {
    if(top<size-1){
        top++;
        arr[top] = data;
    }
    }

    void display()
    {
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
    }
    void peek()
    {
        if(top==-1){
            cout<<"underflow";
            return;
        }if(top==size){
            cout<<"overflow";
            return;
        }else{
             cout<<arr[top]<<endl;
        }
    }
    void pop()
    {
        if(top!=-1){
            arr[top]=0;
            top--;
        }else{
            cout<<"underflow";
        }
    }
     bool isempty()
    {
        if(top==-1){
            cout<<"stack is empty";
            return 1;
        }else return 0;
    }
    bool isfull()
    {
        if(top>=size){
            cout<<"stack is full";
            return 1;
        }else return 0;
    }

};

int main()
{
    stack st(5);
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.peek();
    st.pop();
    st.peek();
    st.pop();
    st.peek();
    st.pop();
    st.peek();
    st.pop();
    st.peek();
    st.isempty();
    cout<<st.isfull();
    return 0;
}