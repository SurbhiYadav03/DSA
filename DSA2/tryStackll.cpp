#include<iostream>
using namespace std;

class node{
   public:
   int data;
   node* next;

    node(int data){
    this->data=data;
    this->next=NULL;
   }
};

class Stack{
    public:
    
    void push(node* &top,int data){
        node* n = new node(data);
         if(top==NULL){
            top=n;
         }
         else{
            n->next=top;
            top=n;
         }
        display(top);

    }
    void pop(node* &top){
        if(top==NULL){
            cout<<"Underflow"<<endl;
        }
        else{
            node* todel = top;
            top=top->next;
            delete todel;
        }
        display(top);

    }
    void peek(node* &top)
    {
        if(top==NULL){
            cout<<"Stack is empty";
        }
        else{
            cout<<top->data<<endl;
        }
    }
    void display(node* &top){
        if(top==NULL){
            cout<<"Stack empty"<<endl;
        }
        else{
            node* temp = top;
            while(temp!=NULL){
                cout<<temp->data<<"->";
                temp=temp->next;
            }
            cout<<"NULL"<<endl;
        }
    }
};
int main()
{
    node* top = NULL;
    Stack s;
    s.push(top,100);
    s.push(top,200);
    s.peek(top);
    s.push(top,300);
   
    s.pop(top);
    s.peek(top);

    s.pop(top);
    s.peek(top);
    
    // s.pop(top);
    // s.pop(top);

    return 0;
}