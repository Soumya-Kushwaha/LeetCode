class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> ans;
        int val = 0;
        
        for (int i=0; i<nums.size(); i++){
            val += nums[i];
            ans.emplace_back(val);
        }
        
        return ans;        
    }
};