class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> ans;
        for (int i=0; i<(1 << n); i++){
            vector<int> subset;
            for (int j=0; j<n; j++)
                if (i & (1 << j))
                    subset.push_back(nums[j]);
            ans.push_back(subset);
        }
        return ans;
    }
};