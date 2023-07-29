#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtEnd(int data, node* &head)
{
    node *n = new node(data);
    if (head == NULL)
    {
        head = n;
    }
    else
    {
        node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = n;
    }
}
void insertBetween(int data,node*head,int pos)
{
    node* n = new node(data);
    node* temp = head;
    for(int i=1;i<pos-1;i++){
        temp=temp->next;
    }
    n->next = temp->next;
    temp->next = n;

}
void insertAtStart(int data,node* &head)
{
    node* n = new node(data);
    if(head==NULL){
        head=n;
    }else{
        n->next = head;
        head = n;
    }
}
void display(node* &head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout <<"Null"<<endl;
}
void deletionATbeg(node* &head)
{
    node* temp= head;
    head=head->next;
    temp->next = NULL;
    delete temp;
}
void deletionATend(node* &head)
{
    if(head==NULL){
        return;
    }
    if(head->next == NULL){
        head = NULL;
        return;
    }
    else{
        node* temp= head;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    node* todel = temp->next;
    temp->next = NULL;
    delete todel;
    }
}
void deletionATpos(node* &head,int pos)
{
    if(head==NULL){
        return;
    }
    if(head->next == NULL){
        head = NULL;
        return;
    }
    node* temp = head;
    for(int i=1;i<pos-1;i++){
        temp=temp->next;
    }
    node* todel = temp->next;
    temp->next = todel->next;
    delete todel;
}
int main()
{
    node *head = NULL;
    insertAtEnd(100, head);
    insertAtEnd(200, head);
    insertAtEnd(300, head);
    insertAtEnd(400, head);
    insertAtEnd(500, head);
    display(head);

    insertAtStart(5000,head);
    display(head);

    insertBetween(9000,head,3);
    display(head);

    deletionATbeg(head);
    display(head);

    deletionATend(head);
    display(head);
    
    deletionATpos(head,4);
    display(head);
   

    return 0;
}