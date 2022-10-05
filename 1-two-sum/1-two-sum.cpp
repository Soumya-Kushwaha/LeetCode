class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        int n = nums.size();
        
        for (int i=0; i<n-1; i++)
            for (int j = i+1; j<n; j++){
                if (nums[i]+nums[j] == target){
                    ans.emplace_back(i);
                    ans.emplace_back(j);
                }
            }
        return ans;
    }
};