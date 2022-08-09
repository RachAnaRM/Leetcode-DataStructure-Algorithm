class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        // bruteforce approach
        // Time: O(n^2) Space: O(1)

        int a, b;
        // take a for loops from i and i + 1
        for(int i = 0; i < nums.size(); i++){
            for(int j = i + 1; j < nums.size(); j++){
                // if sum of values of i and j in an array is equal to target value add that values to an integer
                if(nums[i] + nums[j] == target){
                    a = i;
                    b = j;
                }
            }
        }
        return {a, b}; // return the values
        
        

        // using unordered_map
        // Time: O(n) Space: O(n)
        
        // Algorithm:
        // 1. create a map to store the pairs
        // 2. check for all elements in array if the target - nums[i] value exist
        // 3. if the value exist return the indexes
        // 4. if the value is not exist in the map insert the value and index to the map
        // nums = [2,7,11,15], target = 9

        unordered_map<int, int> indices; // create a map

        for (int i = 0; i < nums.size(); i++) {
            if (indices.find(target - nums[i]) != indices.end()) {
                return {indices[target - nums[i]], i};
            }
            indices[nums[i]] = i;
        }
        return {};
    }
};
