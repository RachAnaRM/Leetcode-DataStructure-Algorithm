class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> mp = {
                                       {'M', 1000}, 
                                       {'D', 500}, 
                                       {'C', 100}, 
                                       {'L', 50}, 
                                       {'X', 10}, 
                                       {'V', 5}, 
                                       {'I', 1}
                                      };
	int output = mp[s.back()]; //start scanning string from back and map the value
    
	for(int i = 0; i < s.size() - 1; i++) {
		if(mp[s[i]] < mp[s[i + 1]]){ //start from begining of the string
            output -= mp[s[i]]; //output - value of the i
        }
		else {
            output += mp[s[i]]; //output + value of the i
        }
	}
	return output; //return output
    }
};

// M C M X C I V
// 5 + 1000 - 100 + 1000 - 10 + 100 - 1
