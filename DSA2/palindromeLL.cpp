// #include<vector>
// class Solution {

// bool checkPal(vector<int> a)
// {
//     int s=0,e=a.size()-1;
//     while(s<=e){
//         if(a[s]!=a[e]){
//             return false;
//         }
//         s++;e--;
//     }
//     return true;
// }
// public:
//     bool isPalindrome(ListNode* head) {
//         vector<int> a;
//         ListNode* temp=head;
//         while(temp!=NULL){
//             a.push_back(temp->val);
//             temp=temp->next;
//         }
//         return checkPal(a);
//     }
// };