class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false; // both strings have different size so it can not be a valid anagram
        
		unordered_map <char, int> mp; // create map to store the char and number of times it appears
        
        // add char from string s to map
        for (char c:s){
            mp[c]++;
        }
        
        // loop through string t and decrease the value of chars from string s in the map
        for(char c:t) {
            mp[c]--;
            // if char value becomes less than 0 return false as string s and t have different characters
            if (mp[c] < 0){
                return false;
            }
        }
        
        return true;
    }
};