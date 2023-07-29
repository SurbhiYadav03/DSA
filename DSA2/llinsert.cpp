#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int k)
    {
        this->data = k;
        this->next = NULL;
    }
};

void  insertathead(int data,node* &head){
    node* n = new node(data);
    n->next=head;
    head=n;
}
void del1(int key,node* &head)
{
    node* ptr = head;
    node* prev = head ;
    if(head->next==NULL){
        delete ptr;
        head=NULL;
    }
    else{
       while(ptr->data!=key){
          prev = ptr;
          ptr=ptr->next;
       }
       prev->next=ptr->next;
       ptr->next=NULL;
       delete ptr;
    }
}
void del2(int pos,node* &head)
{
    if(pos==1){
        node* ptr=head;
        head=head->next;
        delete ptr;
    }
    else
    {
        int count=1;
        node* ptr = head;
        node* prev = head;
        while(count<pos)
        {
            prev = ptr;
            ptr=ptr->next;
            count++;

        }
        prev->next = ptr->next;
        ptr->next=NULL;
        delete ptr;
    }
}
void insertll(int data, node *&head)
{
    node *n = new node(data);
    node *temp = head;

    if (head == NULL)
    {
        head = n;
    }
    else
    {
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=n;
    }
    return;
}

void print(node *head)
{
    node *ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->data << "->";
        ptr = ptr->next;
    }
    cout << "NULL";
}
int main()
{
    node *head = NULL;
    insertathead(100,head);
    insertathead(400,head);
    insertll(10, head);
    insertll(20, head);
    insertll(30, head);
    // del1(30,head);
    del2(3,head);
    print(head);
    return 0;
}