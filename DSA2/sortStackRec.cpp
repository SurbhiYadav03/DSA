// #include <bits/stdc++.h> 

// void insertSorted(stack<int> &stack,int num)
// {
//     if(stack.empty()||stack.top()<num)
//     {
//         stack.push(num);
//     }
//     else
//     {
//         int n = stack.top();
//         stack.pop();
        
//         //recursive call
//         insertSorted(stack,num);
        
//         stack.push(n);
//     }
// }
// void sortStack(stack<int> &stack)
// {
// 	// Write your code here
//     if(stack.empty())
//     {
//         return;
//     }
//     else
//     {
//         int num = stack.top();
//         stack.pop();
       
//         //recursive call
//         sortStack(stack);
        
//         insertSorted(stack,num);
//     }
// }