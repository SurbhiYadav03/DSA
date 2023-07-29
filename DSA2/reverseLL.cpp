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
void print(node* &head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL";
}



void revRec(node* &head,node* curr,node* prev)
{
    if(curr==NULL){
       head = prev;
       return;
    }
    else{
      revRec(head, curr->next, curr);   //head,curr(1step aage),prev=curr
      curr->next = prev;
    }
}
int main()
{
    node *head = NULL;
    insert(head, 100);
    insert(head, 200);
    insert(head, 300);
    insert(head, 400);
    insert(head, 500);
    print(head);
    cout<<endl;

    node* prev=NULL;
    node* curr=head;
    revRec(head,curr,prev);
    print(head);
    
    return 0;
}