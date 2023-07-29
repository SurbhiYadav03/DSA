// #include <bits/stdc++.h> 
// #include<stack>

// bool findRedundantBrackets(string &s)
// {
//     // Write your code here.
//     stack<char> st;

//     for(int i=0;i<s.length();i++)
//     {
//         if(s[i]=='(' || s[i]=='+' || s[i]=='-'|| s[i]=='*' || s[i]=='/')
//         {
//             st.push(s[i]);
//         }
//         else
//         {
//             if(s[i]==')')
//             {
//                 bool isRed=true;
//             while(st.top() != '(')
//             {
//                 if(st.top()=='+' || st.top()=='-'|| st.top()=='*' || st.top()=='/' ){
//                     isRed=false;
//                 }
//                 st.pop();
//             }
            
//             st.pop();
            
//             if(isRed==true){
//             return true;
//             }
//             }
//         }
//     }
    
//     return false;
// }
