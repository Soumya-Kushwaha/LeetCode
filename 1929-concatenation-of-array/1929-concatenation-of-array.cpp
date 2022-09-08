class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int size = nums.size();
        int n = 2*size;
        int ans[n];
        
        for (int i=0; i<size; i++){
            ans[i] = nums[i];
            ans[i+size] = nums[i];
        }
        vector<int> final;
        for (int i=0; i<n; i++)
            final.emplace_back(ans[i]);
        
        return final;
    }
};