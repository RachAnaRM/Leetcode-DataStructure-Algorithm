class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        // Using Sort
//         int n = strs.size(); //array size
//         if(n==0) return ""; //return empty string if array is empty
        
//         string ans  = ""; //initialize empty string
//         sort(begin(strs), end(strs)); //sort the strings in array
//         string a = strs[0]; //initialize the pointer
//         string b = strs[n-1]; //initialize the poniter
        
//         for(int i=0; i<a.size(); i++){ //loop through the strs[0]
//             if(a[i]==b[i]){ //compare if the a[i] == b[i], array is in sorted order
//                 ans = ans + a[i]; //add strings to ans
//             }
//             else{
//                 break;
//             }
//         }
        
//         return ans; //return ans
        string ans="";
        
        int n=strs.size();
        
        if(n==0)
            return ans;
        
        int l=strs[0].length();
        
        // for(string s:strs)
        //     if(l>s.length())
        //         l=s.length();
        
        int index=0;
        for(char c:strs[0])
        {
            for(int i=1;i<n;i++)
            {
                if(strs[i][index]!=c||index>l)
                    return ans;
            }
            ans+=c;
            index++;
        }
        return ans;
        
    }
};