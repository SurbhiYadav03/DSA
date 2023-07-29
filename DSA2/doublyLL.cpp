#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node* next;
    node* prev;

    node(int val)
    {
        data = val;
        next = NULL;
        prev = NULL;   

    }
};

void createLL(node* &head,int val)
{
    node* n = new node(val);
    node* temp=head;

    if(head==NULL)
    {
        head = n;
        return;
    }
    else
    {
        while(temp->next != NULL)
        {
            temp=temp->next;
        }
        temp->next = n;
        n->prev = temp;
    }
}

void display(node* head)
{
    node* temp=head;
    while(temp != NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
        
    }
    cout<<"NULL";
}

void delAtHead(node* &head )
{
    node* toDel =  head;
    head=head->next;
    head->prev = NULL;
    delete toDel;
}
void del(node* &head,int key)
{
    node* temp=head;
    
    if(key==1)  //deletion at head(1st node)
    {
        delAtHead(head);
    }
    while(temp!=NULL && temp->data != key){
        temp=temp->next;
    }
    temp->prev->next = temp->next;

    if(temp->next != NULL)        //if deletion at last node ( it will be a edge case)
    {
    temp->next->prev = temp->prev;
    }

    delete temp;
}

int main()
{
    int n;
    cin>>n;
    
    int a;

    node* head = NULL;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        createLL(head,a);
    }
    display(head);
    del(head,1);
    display(head);
    
    return 0;
}