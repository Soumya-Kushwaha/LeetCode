class Solution {
public:
    int findMaxK(vector<int>& nums) {
        
        unordered_map<int, int> mp;
        int res = -1;
        
        for (int i=0; i<nums.size(); i++){
            if (mp.find(0 - nums[i]) != mp.end())
                res = max(res, abs(nums[i]));
            mp[nums[i]]++;
        }
        
        return res;
    }
};