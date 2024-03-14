class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int,int>mp;
        mp[0]=1;
        int pS=0, count=0;
        
        for(int i=0;i<nums.size();i++)
        {
            pS+=nums[i];
            if(mp[pS-goal])
                count+=mp[pS-goal];
            mp[pS]++;
        }
        return count;
    }
};