class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        
        int n = nums.size();
        
        unordered_map<int, int> mp;
        int maxi = INT_MIN;
        int count = 0;
        
        for (int i=0; i<n; i++){
            mp[nums[i]]++;
            maxi = max(maxi, mp[nums[i]]);
        }
        
        for (auto it : mp){
            if (it.second == maxi)
                count += it.second;
        }
        
        return count;
    }
};