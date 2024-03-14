class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        
        unordered_map<int,int>mp;
        mp[0] = 1;
        
        int summ=0, count=0;
        
        for(int i=0;i<nums.size();i++)
        {
            summ += nums[i];
            int val = summ - goal;
            
            if(mp[val])
                count += mp[val];
            
            mp[summ]++;
        }
        
        return count;
    }
};