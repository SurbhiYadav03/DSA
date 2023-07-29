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
class queue
{
public:
    void push(int data, node *&front, node *&rear)
    {
        node *n = new node(data);
        if (front == NULL && rear == NULL)
        {
            rear = front = n;
        }
        else
        {
            rear->next = n;
            rear = n;
        }
        display(front, rear);
        cout << endl;
    }

    void pop(node* &front,node* &rear)
    {
        if (front == NULL)
        {
            cout << "Underflow";
        }
        else
        {
            node *todel = front;
            front = front->next;
            delete todel;
        }
        display(front, rear);
        cout << endl;
    }

    void display(node *&front, node *&rear)
    {
         node *temp = front;
        while (temp != rear->next)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL";
    }
};
int main()
{
    node *front = NULL;
    node *rear = NULL;

    queue q;
    q.push(100, front, rear);
    q.push(200, front, rear);
    q.push(300, front, rear);
    q.push(400, front, rear);

    q.pop(front,rear);
    q.pop(front,rear);
    q.pop(front,rear);
    q.pop(front,rear);
    q.pop(front,rear);
    return 0;
}