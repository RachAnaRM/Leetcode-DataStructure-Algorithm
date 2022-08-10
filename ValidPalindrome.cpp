// Algorithm:
// initialize pointers at start of the string and end of the string
// loop while i less than j
// check if the start pointer i is alphanumeric value, if it is not a alphanumeric value increment a pointer to next element
// else if the end pointer is not an alphanumeric value decrement a end pointer
// else if value of start and end is not equal, return false as it is not a palindrome
// else if the values match increment the start pointer and decrement the end pointer
// return true if the string is palindrome

class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0;
        int j = s.length();

        while(i < j) {
            if(!isalnum(s[i])) {
                i++;
            }
            else if(!isalnum(s[j])) {
                j--;
            }
            else if(s[i] != s[j]) {
                return false;
            }
            else {
                i++;
                j--;
            }
        }
        return true;
    }
};