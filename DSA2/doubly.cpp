#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *prev;
    node *next;

    node(int key)
    {
        this->data = key;
        this->prev = NULL;
        this->next = NULL;
    }
    ~node()
    {
        int val = this->data;
        if(next!=NULL){
            delete next;
            next = NULL;
        }
    }
};

void insertathead(node* &head, int data)
{
    node *n = new node(data);

    if(head==NULL){
        head=n;
        return;
    }
    else{
    n->next = head;
    head->prev = n;
    head = n;
   }
}
void insertattail(node *&head, int data)
{
    node *n = new node(data);
    node *temp = head;

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
        n->prev = temp;
    }
}

void deletion(node* head , int pos)
{
    node* temp = head;
    node* prev =  NULL;

    if(pos==1){
        temp->next->prev = NULL;
        head=head->next;
        temp->next = NULL;
        delete temp; //destructor in class
    }
    else{
    int cnt = 1;
    while(cnt<pos)
    {
       prev = temp;
       temp=temp->next; 
       cnt++;
    }

    prev->next = temp->next;
    temp->next->prev = prev;

    temp->prev = NULL;

    temp->next = NULL;
    delete temp;   //destructor in class
    }

}
void insertatPos(node *head, int pos, int data)
{
   
    if (pos == 1)
    {
        insertathead(head, data);
        return;
    }

   else{
    node *n = new node(data);
    node *temp = head;

        int cnt = 1;
        while (cnt < pos - 1)
        {
            temp = temp->next;
            cnt++;
        }
        n->next = temp->next;
        temp->next->prev = n;
        temp->next = n;
        n->prev = temp;
   }
}

void print(node *head)
{
    node *ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->data << "->";
        ptr = ptr->next;
    }
    cout << "Null";
}

int main()
{
    node *head = NULL;


    // insertattail(head, 20);
    // insertattail(head, 30);
    // insertattail(head, 200);

    // insertathead(head, 100);

   
    // insertatPos(head, 2, 500);
    insertatPos(head, 1, 1400);
    
    // deletion(head,3);

    print(head);
    return 0;
}