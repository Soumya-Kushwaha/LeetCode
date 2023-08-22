class Solution {
public:
    void subsequences(vector<int>& nums, int i, vector<int>& temp, vector<vector<int>>& ans){
        if (i == nums.size()){
            ans.push_back(temp);
            return;
        }
        
        // take an element
        temp.push_back(nums[i]);
        subsequences(nums, i+1, temp, ans);
        
        // not take an element
        temp.pop_back();
        subsequences(nums, i+1, temp, ans); 
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        subsequences(nums, 0, temp, ans);
        return ans;
    }
};