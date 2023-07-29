// void insertAtbottom(stack<int> &stack,int ele)
// {
//     if(stack.empty())
//     {
//         stack.push(ele);
//         return;
//     }
   
//         int num = stack.top();
//         stack.pop();
//         insertAtbottom(stack,ele);
        
//         stack.push(num);
// }

// void reverseStack(stack<int> &stack) {
//     // Write your code here
    
//     if(stack.empty()){
//         return;
//     }
//     else
//     {
//         int num = stack.top();
//         stack.pop();
//         reverseStack(stack);
        
//         insertAtbottom(stack,num);
//     }
// }