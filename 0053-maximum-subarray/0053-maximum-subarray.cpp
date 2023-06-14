class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = LONG_MIN;
        long long maxSum = LONG_MIN;

        for (int i=0; i<nums.size(); i++){
            sum += nums[i];
            if (sum > maxSum)
                maxSum = sum;

            if (sum < 0)
                sum = 0;
        }
        return maxSum;
    }
};