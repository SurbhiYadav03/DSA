#include<iostream>
#include<map>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void insert(node* &head,node* &tail, int data){
     node* n = new node(data);

     if(head==NULL && tail==NULL){
        head=n;
        tail=n;
        return;
     }
     else{
        node* temp = head;
        while(temp->next != NULL){
            temp=temp->next;
        }
        temp->next = n;
        tail=n;

     }

}

void print(node* &head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL";
}

bool detectLoop(node* &head){
    if(head==NULL){
        return false;
    }
    map<node*,bool> visited;
    node* temp=head;
    while(temp!=NULL){

        //cycle wala case
        if(visited[temp]==true){
            cout<<"Loop at "<< temp->data<<endl;
            return true;
        }
        visited[temp] = true;
        temp=temp->next;
    }
    return false;
}

bool FloydDetectLoop(node* &head)
{
    if(head==NULL){
        return false;
    }
    node* slow = head;
    node* fast = head;
    while(slow!=NULL && fast!=NULL){
        slow=slow->next;
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
        }

        if(fast==slow)
        return true;
    }  
    return false;
}

node* getLoopStart(node* head){
    if(head==NULL){
        return NULL;
    }
    // node* intersection = FloydDetectLoop(head);   ---> here floyd should return the intersection point (slow/fast pointer) -->execute after loop detected code then

    node* slow = head;
    node* fast = head;
    while(slow!=NULL && fast!=NULL){
        //to get intersection point(loop detection point)
        slow=slow->next;
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
        } 

        //after loop detected -- to return loop start
        if(fast == slow){   
            slow=head;
            slow=slow->next;
            fast=fast->next;
            if(fast == slow)   //point where loop started
            return slow;
        } 
    }
}

void removeLoop(node* &head){
    node* loopStart = getLoopStart(head);
    node* temp = loopStart;
    while(temp->next !=loopStart){
        temp=temp->next;
    }
    temp->next = NULL;
}
int main()
{
    node* head = NULL;
    node* tail = NULL;
    insert(head,tail,100);
    insert(head,tail,200);
    insert(head,tail,300);
    insert(head,tail,400);
    insert(head,tail,500);
    print(head);
    cout<<endl;
    tail->next = head->next;

    cout<<detectLoop(head)<<endl;
    cout<<FloydDetectLoop(head)<<endl;
    cout<<getLoopStart(head) -> data;
    removeLoop(head);
    cout<<endl;
    cout<<detectLoop(head)<<endl;

    return 0;
}