//{ Driver Code Starts
// driver

#include <bits/stdc++.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}


// } Driver Code Ends
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    void insert(struct Node* &anshead,struct Node* &anstail,int digit)
{
    struct Node* n = new struct Node(digit);

    if(anshead==NULL){
        anshead = n;
        anstail = n;
        return;
    }
    else
    {
      anstail->next = n;
      anstail = n;
    }
}
    struct Node* add(struct Node* &first,struct Node* &second)
    {
    int carry = 0;
    int digit;
    struct Node* anshead = NULL;
    struct Node* anstail = NULL;
    

    while(first != NULL && second !=NULL)
    {
        //adding data of both list + carry
        int sum=carry + first->data + second->data;
        digit = sum%10;
        
        //inserting in new ll
        insert(anshead,anstail,digit);

        carry=sum/10;
        
        first=first->next;
        second=second->next;
    }

        while(first!=NULL){
            int sum = carry + first->data;
            int digit = sum%10;
            insert(anshead,anstail,digit);
            carry = sum/10;
            first = first->next;
        }
        while(second!=NULL){
            int sum = carry + second->data;
            int digit = sum%10;
            insert(anshead,anstail,digit);
            carry = sum/10;
            second=second->next;
        }
        while(carry!=0){
            int sum = carry;
            int digit = sum%10;
            insert(anshead,anstail,digit);
            carry = sum/10;
        }
    return anshead;
 }

    
   struct Node* reverse(Node* &head)
   {
    struct Node* curr=head;
    struct Node* prev =NULL;
    struct Node* next;

    while(curr!=NULL)
    {
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}


    public:
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        first = reverse(first);
        second = reverse(second);

        Node* ans = add(first,second);

        return reverse(ans);

    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        Solution ob;
        Node* res = ob.addTwoLists(first,second);
        printList(res);
    }
    return 0;
}

// } Driver Code Ends