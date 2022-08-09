class Solution {
public:
    bool isValid(string s) {
        // Time: O(n) Space: O(n)
        // Algorithm:
        // 1. create a stack
        // 2. loop through given string
        // 3. if the string is opening brackets (, [, { push that into stack
        // 4. else check if string is a closing bracket ), ], } 
        // 5. if it is a closing bracket check if the stack is empty or current string is closing bracket and stack.top is not opening bracket return false
        // 6. else pop the top value from the stack as the brackets are in correct order
        // 7. at the end check if the stack is empty return true as all the brackets had a correct order
        // 8. else return false

        stack<int> st;
        
        for(int i = 0; i < s.length(); i++) {
            
            if(s[i] == '(' || s[i] == '[' || s[i] == '{') {
                st.push(s[i]);
            }
            
            else if(s[i] == ')' || s[i] == ']' || s[i] == '}') {
                
                if(st.empty() || s[i] == ')' && st.top() != '(' || s[i] == ']' && st.top() != '[' || s[i] == '}' && st.top() != '{') {
                    return false;
                } 
                
                else {
                    st.pop();
                }
                
            }
        }
            if(st.empty()) {
            return true;
        }
        
        return false;

        // using swich case
        // stack<char> store_char;
        // for (char c : s) {
        //     switch (c) {
        //         case '(': 
        //         case '{': 
        //         case '[': store_char.push(c); 
        //                   break;
        //         case ')': if (store_char.empty() || store_char.top()!='(') return false;                             else store_char.pop(); 
        //                   break;
        //         case '}': if (store_char.empty() || store_char.top()!='{') return false;                             else store_char.pop(); 
        //                   break;
        //         case ']': if (store_char.empty() || store_char.top()!='[') return false;                             else store_char.pop(); 
        //                   break;
        //         default: ; 
        //     }
        // }
        // return store_char.empty() ;
    }
};
