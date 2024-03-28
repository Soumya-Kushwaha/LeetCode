// Sliding Window

class Solution 
{
public:
    int maxSubarrayLength(vector<int>& nums, int k) 
    {
        int n = nums.size();
        unordered_map<int, int> mp;
        
        int left = 0, right = 0, ans = 0;
        
        for(int i = right; i < n; i++)
        {
            mp[nums[i]]++;
            while (mp[nums[i]] > k)
            {
                mp[nums[left]]--;
                left++;
            }
            ans = max(ans, i - left + 1);
        }
        return ans;
    }
};