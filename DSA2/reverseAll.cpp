#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void createLL(node *&head, int val)
{
    node *n = new node(val);

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
void display(node *head)
{
    node *ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->data << "->";
        ptr = ptr->next;
    }
    cout << "NULL"<<endl;
}

// node* reverse(node *&head)
// {
//     node *prev = NULL;
//     node *current = head;
//     node* next;

//     while (current != NULL)
//     {
//         next = current->next;
//         current->next = prev;
//         prev = current;
//         current = next;
//     }
//     return prev;
// }

node* reverseRecursive(node* &head)
{
    if(head==NULL || head->next==NULL)
    {
        return head;
    }
    node* newhead2 = reverseRecursive(head->next);
    head->next->next = head;
    head->next=NULL;

    return newhead2;
}

int main()
{
    node *head = NULL;
    createLL(head, 1);
    createLL(head, 2);
    // createLL(head, 3);
    // createLL(head, 4);
    display(head);
    // node* newhead1=reverse(head);
    // display(newhead1);

    node* recursive=reverseRecursive(head);
    display(recursive);

    return 0;
}