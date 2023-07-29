#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *prev;
    node *next;

    node(int data)
    {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
};

void insertathead(node* &head, int data)
{
    node *n = new node(data);

    if(head==NULL){
        head=n;
        return;
    }
}

void insertpos(node *&head, int data, int pos)
{
    node *n = new node(data);
    if (pos == 1)
    {
        n->next = head;
        head->prev = n;
        head = n;
        return;
    }

    else
    {
        int count = 1;
        node *temp = head;
        node *prev = NULL;

        while (count < pos)
        {
            prev = temp;
            temp = temp->next;
            count++;
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
    insertathead(head, 200);
    insertpos(head, 300,1);
    insertpos(head, 50,1);
    insertpos(head, 900,1);
    print(head);
    return 0;
}