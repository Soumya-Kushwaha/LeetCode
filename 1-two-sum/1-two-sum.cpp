class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int, int> ans;
        
        for (int i=0; i<nums.size(); i++){
            int diff = target - nums[i];
            
            if (ans.find(diff) != ans.end())
                return {ans[diff], i};
            
            ans[nums[i]] = i;
        }
        return {};        
    }
};