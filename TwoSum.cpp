class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // bruteforce approach
        // Time: O(n^2) Space: O(1)
        int a, b;
        for(int i = 0; i < nums.size(); i++){
            for(int j = i + 1; j < nums.size(); j++){
                if(nums[i] + nums[j] == target){
                    a = i;
                    b = j;
                }
            }
        }
        return {a, b};
        
        // using unordered_map
        // Time: O(n) Space: O(n)
        unordered_map<int, int> indices;
        for (int i = 0; i < nums.size(); i++) {
            if (indices.find(target - nums[i]) != indices.end()) {
                return {indices[target - nums[i]], i};
            }
            indices[nums[i]] = i;
        }
        return {};
    }
};