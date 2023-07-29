#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node* next;

    node(int val)
    {
        data=val;
        next=NULL;
    }
};

void insertAtStart(node* &head, int val)
{
    node* n = new node(val);
    
    n->next = head;
    head=n;
}
void insertAtEnd(node* &head,int val)
{
    node* n = new node(val);

    if(head==NULL)
    {
        head=n;
        return;
    }
    node* temp=head;

    while(temp->next != NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
}

void insertAtposition(node* &head,int data,int key){
    node *n = new node(data); //node to insert
    node* ptr=head;
    int count=1;
    while(count<key-1){
        ptr=ptr->next;
        count++;
    }
    n->next = ptr->next;
    ptr->next=n;

}
bool checkCircular(node* &head){
    if(head==NULL){
        return true;
    }
    node* temp=head->next;

    while(temp!=NULL && temp!=head){
        temp=temp->next;
    }
    if(temp==head){
        return true;
    }
    else{
        return false;
    }
}
void display(node* head)
{
    node* temp=head;
    while(temp != NULL)
    {
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }
    cout<<"NULL";
}

bool Search(node* &head , int key )
{
    node* ptr=head;
    while(ptr!=NULL)
    {
        if(ptr->data==key)
        {
            return true;
        }
        ptr=ptr->next;
    }
       return false;
}

void deleteNode(node* &head,int val)
{
    if(head==NULL)
    {
        return;
    }
    else if(head->data == val)
    {
        node* temp=head;
        // cout<<temp->data<<endl;
        head=head->next;
        temp->next=NULL;
        delete temp;
        // cout<<temp->data<<endl;
    }
    else
    {
        node* temp=head;
        node* prev;

        while(temp->data != val)
        {
            prev=temp;
            temp=temp->next;
        }
        prev->next = temp->next;
        // cout<<temp->data<<" "<<temp->next<<endl;
        temp->next=NULL;
        delete temp;
        // cout<<temp->data<<" "<<temp->next<<endl;
        

    }

}

int main()
{
    node* head=NULL;
    insertAtEnd(head,100);
    insertAtEnd(head,200);
    insertAtEnd(head,300);

    // insertAtStart(head,500);
    // display(head);
    
    // // cout<<endl<<Search(head,200);
    // // cout<<endl<<Search(head,100);
    // // cout<<endl<<Search(head,1000)<<endl;

    // deleteNode(head, 200);
    // // deleteNode(head, 500);

    // // display(head);
    // insertAtposition(head,1,3);

    display(head);
    cout<<endl;
    cout<<checkCircular(head);

    return 0;
}