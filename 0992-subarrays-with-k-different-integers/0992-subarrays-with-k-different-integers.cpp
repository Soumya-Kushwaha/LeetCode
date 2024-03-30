int atMostKDistinct(vector<int>& nums,int n,int k){
    
    int count = 0;
    int left = 0;
    int right = 0;
    
    unordered_map<int,int> mp;
    
    while(right < n){
        
        mp[nums[right]]++;
        
        while(mp.size() > k)
        {
            mp[nums[left]]--;
            
            if(mp[nums[left]] == 0)
            {
                mp.erase(nums[left]);
            }
            
            left++;
        }
        
        count += right - left + 1;
        right++;
    }
    
    return count;
}


class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k)
    {
        int n = nums.size();
        return atMostKDistinct(nums,n,k) - atMostKDistinct(nums,n,k-1);
    }
};