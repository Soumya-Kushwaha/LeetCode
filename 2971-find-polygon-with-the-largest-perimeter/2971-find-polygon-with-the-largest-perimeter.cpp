class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        long long int ans = -1;
        long long int sum = 0;
        sort(nums.begin(), nums.end());
        
        for (int i=0; i<nums.size(); i++){
            if (nums[i] < sum)
                ans = nums[i] + sum;
            sum += nums[i];
        }
        
        return ans;
    }
};