// #include<stack>
// class Solution {
// public:
//     bool isValid(string s) {
//        stack<char>st;
//        for(int i=0;i<s.length();i++){
//        char c = s[i];

//        if(c=='(' || c=='{' || c=='[')
//        {
//            st.push(c);
//        }
//        else
//        {
//            if(!st.empty())
//            {
//                if( (c==')'&& st.top() == '(') || (c=='}'&& st.top() == '{') || (c==']'&& st.top() == '[') )
//                {
//                    st.pop();
//                }
 
//                 else
//                 return false;
//            }
//            else
//            return false;
           
//        }
           
//        } 

//        if(st.empty()){
//            return true;
//        }
//        else{
//            return false;
//        }
//     }
// };