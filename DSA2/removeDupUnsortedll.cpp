#include <iostream>
#include <map>
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

void insert(node *&head, int data)
{
    node *n = new node(data);

    if (head == NULL)
    {
        head = n;
        return;
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

void print(node *&head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL";
}

void removeDup1(node* &head)
{
    node *curr = head;
    node *prev = NULL;

    while (curr != NULL)
    {
        node* prev = curr;
        node *temp = curr->next;

        while(temp!=NULL)
        {
            if (curr->data == temp->data)
        {
            node *todel = temp;
            prev->next = temp->next;
            temp = temp->next;
            delete todel;
        }
        else
        {
            prev = temp;
            temp = temp->next;
        }
        }

        curr = curr->next;
    }
}

void removeDup2(node* &head)
{
    node* temp=head;
    node* prev = NULL;
    
    map<int,bool> visited;
    while(temp!=NULL)
    {

        if(visited[temp->data]==true){
            node* todel = temp;
            prev->next = temp->next;
            temp=temp->next;
            delete todel;
        }

        else{
        visited[temp->data] = true;
        prev=temp;
        temp=temp->next;
        }
        
    }
    
}

void removeDup3(node* &head)
{
    node* temp = head;
    node* next;
    while(temp!=NULL)
    {
        next = temp->next;
        while(next!=NULL)
        {
            if(temp->data > next->data)
        {
            int swap = next->data;
            next->data = temp->data;
            temp->data = swap;
        }
            next=next->next;
 
        } 
        temp=temp->next;
    }

    node* temp2 = head;
    while(temp2!=NULL && temp2->next!=NULL){
        if(temp2->next->data=temp2->data)
        {
            node* todel = temp2->next;
            temp2->next = temp2->next->next;
            delete todel;
        }
        else{
            temp2=temp2->next;
        }
    }
}
int main()
{
    node *head = NULL;
    insert(head, 400);
    insert(head, 300);
    insert(head, 400);
    insert(head, 100);
    insert(head, 300);
    insert(head, 400);
    insert(head, 400);
    insert(head, 300);
    insert(head, 800);
    
    print(head);
    cout << endl;
    // removeDup1(head);
    // removeDup2(head);
    removeDup3(head);
    print(head);

    return 0;
}