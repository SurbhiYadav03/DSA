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
    node *ptr = head;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = n;
}
void display(node *head)
{
    node *ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->data << "->";
        ptr = ptr->next;
    }
    cout << "NULL";
}

node *reverseK(int k, node* &head)
{
    node *prev = NULL;
    node *cur = head;
    node *next;
    int count = 0;

    while (cur!=NULL && count<k)
    {
        next = cur->next;
        cur->next = prev;
        prev = cur;
        cur = next;
        count++;

    }
    if(next!=NULL){
    head->next = reverseK(k,next);
    }
    return prev;
       
}

int main()
{
    int num;
    cout << "Enter no. of elements:";
    cin >> num;

    int k;
    cin >> k;

    int val;

    node *head = NULL;

    cout << "Enter elements:";

    for (int i = 0; i < num; i++)
    {
        cin >> val;
        createLL(head, val);
    }

    node* newhead = reverseK(k, head);

    display(newhead);
    return 0;
}