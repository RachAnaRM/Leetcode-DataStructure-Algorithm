class Solution {
public:
    bool isValid(string s) {
        stack<char> store_char;
        for (char c : s) {
            switch (c) {
                case '(': 
                case '{': 
                case '[': store_char.push(c); 
                          break;
                case ')': if (store_char.empty() || store_char.top()!='(') return false;                             else store_char.pop(); 
                          break;
                case '}': if (store_char.empty() || store_char.top()!='{') return false;                             else store_char.pop(); 
                          break;
                case ']': if (store_char.empty() || store_char.top()!='[') return false;                             else store_char.pop(); 
                          break;
                default: ; 
            }
        }
        return store_char.empty() ;
    }
};