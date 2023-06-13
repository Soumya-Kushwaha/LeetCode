class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans = {-1, -1};
        unordered_map<int, int> mp;
        int n = nums.size();
        
        for (int i=0; i<n; i++){
            if(mp.find(target - nums[i]) != mp.end()){
                ans[0] = i;
                ans[1] = mp[target - nums[i]];
            }
            
            else{
                mp[nums[i]] = i;
            }
        }
        return ans;
    }
};