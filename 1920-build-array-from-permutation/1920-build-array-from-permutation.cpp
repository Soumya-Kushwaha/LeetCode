class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int n = nums.size();
        int ans[n];
        
        for (int i=0; i<n; i++)
            ans[i] = nums[nums[i]];
        
        vector<int> final;
        
        for (int i=0; i<n; i++)
            final.emplace_back(ans[i]);
        
        return final;
    }
};