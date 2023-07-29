#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtHead(node* &head,int data)
{
    node* n = new node(data);
    if(head==NULL){
        head=n;
    }
    else{
       n->next = head;
       head = n; 
    }
}
void insertAtTail(node* &head,int data)
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
    }
}

void display(node* &head)
{
      node* temp = head;
      while(temp!=NULL){
           cout<<temp->data<<"->";
           temp=temp->next;
       }
       cout<<"NULL";
}
void insert(node* &head,int data,int pos)
{
    node* n = new node(data);
    int count=1;
    node* temp = head;
    while(count<pos-1){
       temp = temp->next;
       count++;
    }
    n->next = temp->next;
    temp->next = n;
}

void del(node* &head,int val){
    node* prev = NULL;
    node* curr = head;
    while(curr->data != val && curr!=NULL){
         prev = curr;
         curr=curr->next;
    }
    prev->next = curr->next;
    curr->next = NULL;
    delete curr;
}

int main()
{
    node* head = NULL;
    int n;
    cout<<"Enter no. of nodes";
    cin>>n;
    int data,pos;
    for(int i=0;i<n;i++){
        cout<<"Enter data "<<i+1<<":";
        cin>>data;

        insertAtHead(head,data);
        display(head);
        cout<<endl;
    }

    cout<<"Enter data and position"<<endl;
    cin>>data>>pos;
    insert(head,data,pos);
    display(head);
    
    cout<<"\nEnter data to delete"<<endl;
    cin>>data;
    del(head,data);
    display(head);

    return 0;
}