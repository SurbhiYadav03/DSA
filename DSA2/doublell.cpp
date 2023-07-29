#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node* prev;
    node* next;

    node(int data)
    {
        this->data = data;
        this->prev=NULL;
        this->next=NULL;
    }
};
void insertAtBeg(node* &head,int data)
{
    node* n = new node(data);
    if(head==NULL){
        head=n;
    }
    else{
    n->next = head;
    head->prev = n;
    head = n;
   }
}
void insertAtEnd(node* &head,int data)
{
    node* n = new node(data);
    if(head==NULL){
        head=n;
    }
    else{
        node* temp = head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next = n;
        n->prev = temp;
   }
}
void insertBetween(node* &head,int data,int pos)
{
    node* n = new node(data);
    node* temp=head;
    for(int i=1;i<pos-1;i++){
        temp=temp->next;
    }
    n->next = temp->next;
    temp->next->prev = n;
    n->prev = temp;
    temp->next = n;
}
void delBeg(node* &head)
{
    if(head==NULL){
        return;
    }else{
        node* temp=head;
        head = head->next;
        head->prev = NULL;
        temp->next = NULL;
        delete temp;
    }
}
void delEnd(node* &head)
{
    if(head==NULL){
        return;
    }
    if(head->next==NULL){
        head = NULL;
        return;
    }
    else{
        node* temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->prev->next = NULL;
        delete temp;
    }
}
void delPos(node* &head,int pos)
{
    node* temp = head;
    for(int i=1;i<pos-1;i++)
    {
        temp=temp->next;
    }
    node* todel = temp->next;
    temp->next = todel->next;
    todel->next->prev = temp;
    todel->prev =NULL;
    todel->next =NULL;
    delete todel;
}
void display(node* head)
{
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
int main()
{
    node* head = NULL;
    insertAtBeg(head,100);
    display(head);
    insertAtEnd(head,200);
    display(head);
    insertAtEnd(head,300);
    display(head);
    insertBetween(head,900,2);
    display(head);
    // delBeg(head);
    // display(head);
    // delEnd(head);
    // display(head);
    delPos(head,3);
    display(head);

    return 0;
}