class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        
        int min = INT_MAX;
        int ans, diff;
        
        for (int i=0; i< nums.size(); i++){
            diff = abs(nums[i] - 0);
            if (diff < min){
                min = diff;
                ans = nums[i];
            }
        
            if (diff == min)
                ans = nums[i];
        }
        return ans;
    }
};