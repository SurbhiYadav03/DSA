// /*
// // Definition for a Node.
// class Node {
// public:
//     int val;
//     Node* next;
//     Node* random;
    
//     Node(int _val) {
//         val = _val;
//         next = NULL;
//         random = NULL;
//     }
// };
// */
// void clone(Node* &head,Node* &tail,int data)
// { 
//     Node* n = new Node(data);
//     if(head == NULL){
//         head = n;
//         tail = n;
//         return;
//     }
//     else{
//         tail -> next = n;
//         tail = n;
//     }
// }
// class Solution {
// public:
//     Node* copyRandomList(Node* head) {

//         //clonning ll
//         Node* chead = NULL;
//         Node* ctail = NULL;
//         Node* ptr = head;
//         while(ptr!=NULL){
//             clone(chead,ctail,ptr->val);
//             ptr = ptr->next;
//         }

//         //creating map
//         map<Node* ,Node*> oldToNew;
//         Node* onode = head;
//         Node* cnode = chead;

//         while(onode!=NULL && cnode!=NULL){
//            oldToNew[onode] = cnode;
//            onode = onode->next;
//            cnode = cnode->next;
//         }

//         //arrange random nodes
//         onode = head;
//         cnode = chead;

//         while(onode!=NULL){
//             cnode->random =  oldToNew[onode->random];
//             onode=onode->next;
//             cnode=cnode->next;
//         }
//         return chead;
//     }
// };