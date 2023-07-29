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

void insertAtHead(node *&head, int data)
{
    node *n = new node(data);
    node *temp = head;

    if (head == NULL)
    {
        head = n;
        n->next = head;
        return;
    }
    else
    {
        while (temp->next != head)
        {
            temp = temp->next;
        }
        temp->next = n;
        n->next = head;
        head = n;
    }
}
void insertAtTail(node *&head, int data)
{
    node *n = new node(data);
    node *temp = head;

    if (head == NULL)
    {
        insertAtHead(head, data);
        return;
    }
    else
    {
        while (temp->next != head)
        {
            temp = temp->next;
        }
        temp->next = n;
        n->next = head;
    }
}

void print(node *&head)
{
    node *temp = head;
    do
    {
        cout << temp->data << "->";
        temp = temp->next;
    } while (temp != head);
}

void delatHead(node *&head)
{
    node *temp = head;

    while (temp->next != head)
    {
        temp = temp->next;
    }

    node *todel = head;

    temp->next = head->next;
    head = head->next;

    delete todel;
}
bool checkCircular(node* &head){
    node* temp=head;
    while(temp!=NULL && temp!=head){
        temp=temp->next;
    }
    if(temp==NULL){
        return 0;
    }
    else{
        return true;
    }
}
void del(node *head, int pos)
{
    if (pos == 1)
    {
        delatHead(head);
        return;
    }
    else
    {
        node *temp = head;
        int count = 1;
        while (count != pos - 1)
        {
            temp = temp->next;
            count++;
        }

        node *todel = temp->next;
        temp->next = temp->next->next;
        delete todel;
    }
}
int main()
{
    node *head = NULL;
    insertAtTail(head, 100);
    insertAtTail(head, 200);
    insertAtTail(head, 300);
    insertAtHead(head, 700);
    insertAtHead(head, 500);
    print(head);
    cout << endl;
    // del(head, 3);
    // del(head, 2);
    // del(head, 1);
    cout<<checkCircular(head);

    return 0;
}