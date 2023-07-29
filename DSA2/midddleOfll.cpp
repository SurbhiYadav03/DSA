//leetcode middle of ll
#include<iostream>
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

void middle(node* &head){
    node* slow=head;
    node* fast=head->next;

    while(fast!=NULL){
        fast=fast->next;
        if(fast != NULL){
            fast=fast->next;
        }
        slow=slow->next;
    }
   cout<< slow -> data;
}

void insert(node* &head,int val)
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


int main()
{
    node* head=NULL;
    insert(head,100);
    insert(head,200);
    insert(head,300);
    insert(head,400);
    insert(head,500);

    middle(head);

    return 0;
}