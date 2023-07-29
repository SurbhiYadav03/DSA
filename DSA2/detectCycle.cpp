//detect cycle: hare and tortoise --> floyd algo --> a fast pointer (moves by 2 steps) and a slow pointer(by 1 step),,,
// if (fast pointer == slow pointer till last of ll) => cycle present

//remove cycle => both pointers are at same place ( since cycle detected),, 
//move one of the pointer(say fast) to head and start moving both the pointers by one step ,, wherever (fast-> next == slow->next) make slow->next = NULL ( end of ll)

#include<iostream>
using namespace std;

class node
{
    public:

    int data;
    node* next;

    node(int key)
    {
        data=key;
        next=NULL;
    }
};

void createLL(node* &head , int val)
{
    node* n = new node(val);
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

bool detectCycle(node* head)
{
    node* slow=head;
    node* fast=head;

    while(fast!=NULL && fast->next!=NULL)
    {
        slow = slow->next;
        fast = fast->next->next;

        if(fast==slow)
        {
            return true;
        }
    }
    return false;
}
void makecycle(node* &head,int pos)
{
    int count = 1;

    node* temp = head;
    node* startnode;

    while(temp->next != NULL)
    {
        if(count==pos)
        {
            startnode = temp ;
        }
        count++;
        temp = temp->next;
    }
    temp -> next = startnode;
}

void removeCycle(node* &head)
{
    node* fast = head;
    node* slow = head;
    
    while(slow!=fast)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    fast = head ;
    while(slow->next != fast->next)
    {
        slow=slow->next;
        fast=fast->next;
    }

    slow->next = NULL;

}

int main()
{
    node* head = NULL;

    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        int key;
        cin>>key;

        createLL(head,key);
    }

    makecycle(head,3);
    cout<<endl<<detectCycle(head);
    removeCycle(head);
    cout<<endl<<detectCycle(head);
    display(head);

}