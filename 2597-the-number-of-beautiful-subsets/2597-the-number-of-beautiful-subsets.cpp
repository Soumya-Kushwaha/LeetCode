class Solution {
private:
    int helper(vector<int>& nums, int k, unordered_map<int, int>& freq, int i) {
        if (i == nums.size()) { // base case
            return 1;
        }
        int result = helper(nums, k, freq, i + 1); // nums[i] not taken
        if (!freq[nums[i] - k] && !freq[nums[i] + k]) { // check if we can take nums[i]
            freq[nums[i]]++;
            result += helper(nums, k, freq, i + 1); // nums[i] taken
            freq[nums[i]]--;
        }
        return result;
    }
    
public:
    int beautifulSubsets(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        return helper(nums, k, freq, 0) - 1; // -1 for empty subset
    }
};